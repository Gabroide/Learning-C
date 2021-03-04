// RecursiveFunction.cpp
// Programa para calcular la potencia de un número utilizando una función recursiva

#include <iostream>
#include <stdlib.h>

int fun(int a, int b);

int main()
{
	int a, b, res;
	
	std::cout << "Introduce un numero para la base: ";
	std::cin >> a;
	
	std::cout << "Introde un numero para potencia: ";
	std::cin >> b;
	
	res=fun(a,b);
	
	std::cout << "El resultado es: " << res << std::endl;
	
	system("pause");
	
	return 0;
}

int fun(int a, int b)
{
	int res;
	
	if(b==0)
		res=1;
	else
		res=a*fun(a, b-1);
		
	return res;
}
