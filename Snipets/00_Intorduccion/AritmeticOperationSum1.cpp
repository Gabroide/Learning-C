// AritmeticOperationSum1.cpp
// Programa para introducir dos n�meros y mostrar su resultado

#include <iostream>
#include <stdlib.h>

int main()
{
	int a, b, suma;
	
	std::cout << "Introduce el valor del primer numero: ";
	std::cin >> a;																		// Entrada del n�mero a
	std::cout << "Introduce el valor del segundo numero: ";
	std::cin >> b;																		// Entrada del n�mero b
	suma = a+b;
	
	std::cout << "�a suma de " << a << " mas " << b << " es: " << suma << std::endl;
	system("pause");
	
	return 0;
}
