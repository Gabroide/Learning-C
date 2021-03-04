// Herencia.cpp
// Programa para heredar una clase

#include <iostream>
#include <stdlib.h>

class base
{
	public:
		void mostrar()
		{
			std::cout << "Es la clase base" << std::endl;
		}
};

class derived: public base
{
	public:
		void dis()
		{
			std::cout << "Es la clase derivada" << std::endl;
		}
};

int main()
{
	derived d;
	d.mostrar();
	d.dis();
	
	system("pause");
	
	return 0;
}
