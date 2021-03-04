// Upper&LowerCase.cpp
// Programa para convertir la letras minusculas en mayusculas y mayusculas en minusculas

#include<iostream>
#include <stdlib.h>

int main()
{
	int n;
	char ch;
	
	std::cout << "Introduce una letra mayuscula o minuscula: ";
	std::cin >> ch;
	
	n = ch;
	
	if(n >= 65 && n <= 90)
	{
		n = n + 32;
		ch = n;
		
		std::cout << "La minuscula de la letra introducida es: " << ch << std::endl;
	}
	else if(n >= 96 && n <= 122)
	{
		n = n - 32;
		ch = n;
		
		std::cout << "La mayuscula de la letra introducida es: " << ch << std::endl;
	}
	else
		std::cout << "La tecla pulsada es incorrecta" <<std::cout;
		
	system("pause");
	
	return 0;
}
