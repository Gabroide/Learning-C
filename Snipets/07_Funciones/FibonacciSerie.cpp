// FibonacciSerie.cpp
// Programa para calcular la serie de Fibonacci

#include <iostream>
#include <stdlib.h>

void fib(int n);

int main()
{
	int n;
	
	std::cout << "Introduce el termino de la serie a calcular: ";
	std::cin >> n;
	
	std::cout << "0\t";
	fib(n);
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}

void fib(int n)
{
	double c, d, e;
	c=1;
	d=0;
	
	for(int i=1; i<=n; i++)
	{
		e=c+d;
		c=d;
		d=e;
		
		std::cout << e << "\t";
	}
}
