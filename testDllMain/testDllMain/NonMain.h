#ifndef _NON_MAIN_H_
#define _NON_MAIN_H_
#include "classc.h"
#include "MainDll.h"

using namespace ll;

class A: public C{
public:
	A(B* b) :m_pb(b){ m_pb->Add(this); };
	~A(){};	
	int callFunc();
	int registerSelf();

	B* m_pb;
};


#endif