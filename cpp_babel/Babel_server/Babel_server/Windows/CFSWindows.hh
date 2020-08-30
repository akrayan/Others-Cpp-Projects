#ifndef CFSWINDOWS
# define CFSWINDOWS
# include <Windows.h>
# include <string>
# include <stdio.h>
# include "../Common/IFSAbstract.hh"

class CFSWindows : public IFSAbstract
{
	private:
		HANDLE		hdl_;
	public:
		virtual bool		FSOpen(const std::string &sPath);
		virtual bool		FSClose();
		virtual int			FSRead(std::string &sBuff, int iLen) const;
		virtual int			FSWrite(const std::string &buff) const;
		virtual 			std::string FSgetPwd() const;
};


#endif //CFSWINDOWS
