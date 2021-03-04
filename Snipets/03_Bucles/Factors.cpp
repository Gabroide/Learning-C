// Factors.cpp
// Programam para encontrar el factor del numero introducido
// Se utilizarán bucles anidados

#include <iostream>
#include <stdlib.h>

int main()
{
	int n, res;
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	for(int i=1; i<=20; i++)
	{
		for(int j=2; j<=i; j++)
		{
			if(n%j==0)
			{
				std::cout << j << std::endl;
				n=n/j;
			}	
		}
	}
	
	system("pause");
	
	return 0;
}
