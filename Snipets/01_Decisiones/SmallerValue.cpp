// SmallerValue.cpp
// Programa para encontrar y mostrar el valor mínimo introducido mediante bucles if anidados

#include <iostream>
#include <stdlib.h>

int main()
{
	int a, b, c, min;
	
	std::cout << "Introduce el valor de a: ";
	std::cin >> a;
	
	std::cout << "Introduce el valor de b: ";
	std::cin >> b;
	
	std::cout << "Introduce el valor de c: ";
	std::cin >> c;
	
	if(a<b)
		if(a<c)									// Bucle if anidado
			min = a;
	if(b<a)
		if(b<c)									// Bucle if anidado
			min = b;
	if(c<a)
		if(c<b)
			min = c;

	std::cout<< "El valor minimo es: " << min << std::endl;
	
	system("pause");
	
	return 0;
	
}
