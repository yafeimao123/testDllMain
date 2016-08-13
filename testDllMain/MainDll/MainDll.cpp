#include "MainDll.h"
using namespace ll;

int B::Add(C* m_ptr)
{
	m_amem.push_front(m_ptr);
	return 0;
}




int B::_main()
{
	for each (C *c in m_amem)
	{
		c->callFunc();
	}
	return 0;
}



int main()
{
	return b->_main();
}
