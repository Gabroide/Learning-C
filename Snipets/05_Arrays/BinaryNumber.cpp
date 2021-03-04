// BinaryNumber.cpp
// Programa para convertir un número entero en un número binario

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[50], i, n, r;
	
	i=0;
	
	std::cout << "Introduceun numero: ";
	std::cin >> n;
	
	while(n>=1)
	{
		r=n%2;
		n=n-r;
		n=n/2;
		a[i]=r;
		
		i++;
	}
	
	while(i>=0)
	{
		std::cout << a[i];
		
		i--;
	}
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
