// PrimeNumber.cpp
// Programa para saber si un número es primo o no
// Para ello se utilizará un bluce do-while

#include <iostream>
#include <stdlib.h>

int main()
{
	int i, n, cont;
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	cont=0;
	i = 1;
	do
	{
		if(n%i==0)
			cont=cont+1;
		
		i++;
	}
	while(i<=n);
	
	if(cont=2)
		std::cout << "El numbero es primo" << std::endl;
	else
		std::cout << "EL numero no es primo" << std::endl;
		
	system("pause");
	
	return 0;
}
