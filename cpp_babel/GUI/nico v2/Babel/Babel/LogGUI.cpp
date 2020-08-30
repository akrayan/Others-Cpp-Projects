#include "LogGUI.h"
#include "TestUDP.h"
#include "Parser.h"

LogGUI::LogGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	whereAreYou = LOGIN;
	homePage = new HomeGUI(&client, &clientInfo);
	clientInfo.settings = new Settings();
	client = Client::Client("toto", "titi");
	ui.psw_edit->setEchoMode(QLineEdit::Password);
	// signal emis au mauvais settings
	QObject::connect(ui.pushButton_register, SIGNAL(clicked()), this, SLOT(registering()));
	// bouton registering
	QObject::connect(ui.connect_btn, SIGNAL(clicked()), this, SLOT(recoit_IP()));
	// bouton connection
	QObject::connect(ui.settings_btn, SIGNAL(clicked()), this, SLOT(change_setting()));
	// bouton settings
	QObject::connect(&clientInfo.soc, SIGNAL(connected()), this, SLOT(connexion_OK()));
	// signal émis lors de la connexion au serveur
	QObject::connect(&clientInfo.soc, SIGNAL(readyRead()), this, SLOT(lecture()));
	// signal émis lorsque des données sont prêtes à être lues
}

void LogGUI::change_setting()
{
	clientInfo.settings->show();
}

void LogGUI::registering()
{
	registerPage = new Register(&client, &clientInfo);
	registerPage->show();
	whereAreYou = REGISTER;
}

void LogGUI::recoit_IP()
{
	clientInfo.soc.abort();
	//if (clientInfo.settings->getIp().isEmpty() && clientInfo.settings->getPort() > 1024);
	if (!clientInfo.settings->getIp().isEmpty() && clientInfo.settings->getPort() > 1024)
	{
		clientInfo.soc.connectToHost(clientInfo.settings->getIp(), clientInfo.settings->getPort()); // pour se connecter au serveur
	}
	if (clientInfo.soc.state() == QAbstractSocket::ConnectedState)
		client.connexion(client, &clientInfo);
		
}

void LogGUI::recoit_texte()
{
	QTextStream texte(&clientInfo.soc); // on associe un flux à la socket
//	texte << t << endl;        // on écrit dans le flux le texte saisi dans l'IHM
}

void LogGUI::connexion_OK()
{
	OutputDebugString(L"CONNECION SERVER OK !");
	emit vers_IHM_connexion_OK(); // on envoie un signal à l'IHM
	if (client.getStatus() == Client::OFFLINE && whereAreYou == LOGIN)
		client.connexion(client, &clientInfo);
}

void LogGUI::lecture()
{
	Parser parser;
	QString ligne;
	QString ligne3(" ");
	LPCWSTR ligne2;

	ligne = clientInfo.soc.readLine();
	ligne2 = (const wchar_t*)ligne.utf16();
	OutputDebugStringW(ligne2);
	/*while (clientInfo.soc.canReadLine()) // tant qu'il y a quelque chose à lire dans la socket
	{
		ligne = clientInfo.soc.readLine();     // on lit une ligne
		ligne2 = (const wchar_t*)ligne.utf16();
		OutputDebugStringW(ligne2);
		OutputDebugString(L"#");
		*/
		std::vector<std::string> command = parser.deserialize(ligne.toStdString());
		for (std::vector<std::string>::iterator i = command.begin(); i != command.end(); ++i)
		{
			try {
				int x = std::stoi(command[0]);
				parser.command(*i, &client);
				if (*i == "17" || *i == "18")
				{
					client.setStatus(Client::Status::ONLINE);
					this->hide();
					homePage->show();
					registerPage->hide();
				}
				else if ((*i).find("9") != std::string::npos)
				{
					this->show();
					whereAreYou = LOGIN;
					client.setStatus(Client::Status::OFFLINE);
					//delete client;
				}
				else if ((*i).find("6 ") != std::string::npos)
				{
					acceptePage = new AccepteCallGUI(&client, &clientInfo);
					acceptePage->show();
				}
				else if ((*i).find("7") != std::string::npos)
				{
					std::vector<std::string> _cmdlist;
					std::vector<std::string> cmdList_space;
					std::string token;

					_cmdlist.push_back(*i);
					for (int i = 0; i < _cmdlist.size(); i++)
					{
						std::istringstream ss(_cmdlist[i]);
						while (std::getline(ss, token, static_cast<char>(_SEPARATOR)))
						{
							token.erase(std::remove(token.begin(), token.end(), END_SEPARATOR), token.end());
							token.erase(std::remove(token.begin(), token.end(), '\n'), token.end());
							cmdList_space.push_back(token);
						}
					}
					std::string ip = cmdList_space[1];
					MyUDP *client_udp;
					Audio *audio;
					SuperThread *thread;

					client_udp = new MyUDP(ip, 1818);
					audio = new Audio;
					thread = new SuperThread(client_udp, audio);
					client_udp->a = audio;
					thread->start();
				}
			}
			catch (std::invalid_argument& e) {
				// if no conversion could be performed
			}
		}
}
