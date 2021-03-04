// PrimerNumbers.cpp
// Progrmaa para calcular los números primos que hay dentro de un rango dado

#include <iostream>
#include <stdlib.h>

void prime(int a, int b);							// Declaramos el prototipo de la unción

int main()
{
	int ini, fin;
	
	std::cout << "Introduce el valor inicial: ";
	std::cin >> ini;
	
	std::cout << "Introduce el valor final: ";
	std::cin >> fin;
	
	prime(ini, fin);
	
	system("pause");
	
	return 0;
}

void prime(int a, int b)
{
	int cont;
	
	for(int i=a; i<=b; i++)
	{
		cont=0;
		
		for(int j=1; j<=i; j++)
		{
			if(i%j==0)
				cont=cont+1;
		}
		
		if(cont==2)
			std::cout << i << std::endl;
	}
}
