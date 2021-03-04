// SequentialSearch.cpp
// Programa para buscar un número de una lista mediante una búsqueda secuencial

#include <iostream>
#include <stdlib.h>

int main()
{
	int n, a[10];
	char ch='n';										
	
	std::cout << "INtroduce el numero a buscar: ";
	std::cin >> n;
	
	for(int i=0; i<=9; i++)
		a[i]=rand()%100;
	
	for(int i=0; i<=9; i++)
		if(n==a[i])
			ch='y';
	
	if(ch=='y')
		std::cout << "Se ha encontrado el numero" << std::endl;
	else
		std::cout << "Mo se ha encontrado el numero" << std::endl;
		
	for(int i=0; i<=9; i++)
		std::cout << a[i] << "\t";
		
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
