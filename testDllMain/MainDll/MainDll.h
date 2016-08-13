#ifndef _MAIN_DLL_H_
#define _MAIN_DLL_H_

#include "classc.h"
#include <list>
namespace ll{
	class _declspec(dllexport) B :public D
	{
	public:
		B(){};
		~B(){};
		int Add(C* m_ptr);
		int _main();
	private:
		std::list<C*> m_amem;
	};
	B *b = new B;
	extern int main();
}



#endif