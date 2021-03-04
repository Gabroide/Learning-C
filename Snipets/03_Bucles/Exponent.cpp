// Exponent.cpp
// Programa para encontrar el exponente de un numero introducido.

#include <iostream>
#include <stdlib.h>

int main()
{
	int b, p;
	double res;
	
	std::cout << "Introduce la base de la potencia: ";
	std::cin >> b;
	
	std::cout << "Introduce el exponent de la potencia: ";
	std::cin >> p;
	
	res = 1;
	
	for(int i=1; i<=p; i++)
		res = res*b;
		
	std::cout << "El resultado es: " << res << std::endl;
	
	system("pause");
	
	return 0;
	
}
