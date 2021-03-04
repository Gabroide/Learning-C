// DerivedConstructor.cpp
// Programa para heredar un constructor derivado

#include <iostream>
#include <stdlib.h>

class base
{
	private: 
		int m;
	
	public:
		base()
		{
			m=0;
		}
		
		base(int c)
		{
			m=c;
			
			std::cout << "La cuente es " << m << std::endl;
			std::cout << "Es la clase base" << std::endl;
		}
};

class derived: public base
{
	private:
		int q;
		
	public:
		derived(): base()
		{
			q=0;
		}
		
		derived(int p): base(p)
		{
			q=p;
			
			std::cout << "La cuenta es " << q << std::endl;
			std::cout << "Es la clase derivada" <<std::endl;
		}
};

int main()
{
	derived d;
	derived d1(10);
	
	system("pause");
	
	return 0;
}
