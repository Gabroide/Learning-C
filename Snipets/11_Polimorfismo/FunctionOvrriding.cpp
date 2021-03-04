// FunctionOvrriding.cpp
// Programa para sobreescribir una función

#include <iostream>
#include <stdlib.h>

class base
{
	void fun()
	{
		std::cout << "Hola que tal?" << std::endl;
		std::cout << "En la clase base" << std::endl;
	}
};

class derived: public base
{
	public:
		void fun()
		{
			std::cout << "Yo estoy bien" << std::endl;
			std::cout << "Es una clase derivada" << std::endl;
		}
};

int main()
{
	derived d;
	d.fun();
	
	system("pause");
	
	return 0;
}
