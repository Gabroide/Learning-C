// SwapBunvers.cpp
// Programa para intercambiar dos n�meros  utilizando una variable

#include <iostream>
#include <stdlib.h>

int main()
{
	int a, b, c;		// Declaraci�on de variable enteras
	
	a=10;
	b=20;
	c=a;
	a=b;
	b=c;
	
	std::cout << "El valor de a es: " << a << std::endl;
	std::cout << "El valor de b es: " << b << std::endl;
	
	system("pause");
	
	return 0;
}
