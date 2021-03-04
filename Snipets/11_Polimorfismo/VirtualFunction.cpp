// VirtualFunction.cpp
// Programam para mostrar un mensaje utilizando un función virtual

#include <iostream>
#include <stdlib.h>

class base
{
	private:
		int data;
	
	public:
		virtual fun()
		{
			std::cout << "Es la clase base" << std::endl;
			std::cout << "Funcion virtual" << std::endl;
		}
};

class derived:public base
{
	public:
		fun()
		{
			std::cout << "Es la clase derivada" << std::endl;
			std::cout << "Clase virtual" << std::endl;
		}
};

class der: public base
{
	public:
		fun()
		{
			std::cout << "Es la segunda clase derivada" << std::endl;
			std::cout << "clase virtual" << std::endl;
		}
};

int main()
{
	base *b;
	derived d;
	der d1;
	
	b=&d;
	b->fun();
	b=&d1;
	b->fun();
	
	system("pause");
	
	return 0;
}
