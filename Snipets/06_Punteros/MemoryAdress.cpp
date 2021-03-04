// MemoryAdress.cpp
// Programam para mostrar la dirección de memoria de una variable

#include <iostream>
#include <stdlib.h>

int main()
{
	int a;
	int *p;						// Definimos un puntero de enteras
	
	a=5;
	p=&a;						// Asignamos al puntero la dirección de a (&)
	
	std::cout <<"El valor de a es: " << a << std::endl;
	std::cout << "La dirección de memoria de a es: " << p << std::endl;
	
	system("pause");
	
	return 0;
}
