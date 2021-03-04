// AritmeticOperationSum1.cpp
// Programa para introducir dos números y mostrar su resultado

#include <iostream>
#include <stdlib.h>

int main()
{
	int a, b, suma;
	
	std::cout << "Introduce el valor del primer numero: ";
	std::cin >> a;																		// Entrada del número a
	std::cout << "Introduce el valor del segundo numero: ";
	std::cin >> b;																		// Entrada del número b
	suma = a+b;
	
	std::cout << "Ña suma de " << a << " mas " << b << " es: " << suma << std::endl;
	system("pause");
	
	return 0;
}
