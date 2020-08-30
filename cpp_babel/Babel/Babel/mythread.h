#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <iostream>

class MyThread : public QThread
{
public:
	MyThread();
protected:
	void run();
	void run2();
};

#endif // MYTHREAD_H