// GreaterNumber.cpp
// Busca y devuelve el número más alto de los números introducidos mediante dos bucles if

#include <iostream>
#include <stdlib.h>

int main()
{
	int a, b, c, max;
	
	std::cout << "Introduce el valor de a: ";
	std::cin >> a;
	
	std::cout << "Introduce el valor de b: ";
	std::cin >> b;
	
	
	std::cout << "Introduce el valor de c: ";
	std::cin >> c;
	
	if(a>b)
		max=a;
	else
		max = b;
	if(c>max)
		max = c;
	
	std::cout << "El valor mas alto es " << max << std::endl;
	
	system("pause");
	
	return 0;
}
