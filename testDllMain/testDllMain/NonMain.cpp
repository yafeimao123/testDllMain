//#include <stdio.h>
//#include "NonMain.h"
//#include "MainDll.h"
/*
int A::registerSelf()
{
	return 0;
}


int A::callFunc()
{
	printf("call fuction in exe without main\n");
	return 0;
}

class CountDownLatch
{
public:
	explicit CountDownLatch(int count);
	void wait();
	void countDown();

private:
	mutable MutexLock mutex_;
	Condition condition_;
	int count_;
};


void CountDownLatch::wait()
{
	MutexLockGuard lock(mutex_);
	while (count_ > £°)
	{
		condition_.wait();
	}
}

void CountDownLatch::countDown()
{
	MutexLockGuard lock(mutex_);
	--count_;
	if (count_ == 0)
	{
		condition_.notifyAll();
	}
}


A a(b);


*/

//add a line
//add another line
class Base1 {
public:
	Base1();
	virtual ~Base1();
	virtual void speackClearly();
	virtual Base1* clone() const;
protected:
	float data_Base1;
};

class Base2 {
public:
	Base2();
	virtual ~Base2();
	virtual void mumble();
	virtual Base2* clone() const;
protected:
	float data_Base2;
};

class Derived : public Base1, public Base2 {
public:
	Derived();
	virtual ~Derived();
	virtual Derived* clone() const;
protected:
	float data_Derived;
};

int main(void)
{
	return 0;
}

