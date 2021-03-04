// SortingValues.cpp
// Programa para ordenar un listado de caracteres utilizando una ordenación doble

#include <iostream>
#include <stdlib.h>

int main()
{
	int temp, n;
	char a[]="gaspode";
	
	for(int j=0; j<sizeof(a); j++)
		for(int i=0; i<sizeof(a)-j; i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		
	for(int i=0; i<=sizeof(a); i++)
		std::cout << a[i] << "\t";
	
	std::cout << std::endl;
	
	system("pause");
		
	return 0;
}
