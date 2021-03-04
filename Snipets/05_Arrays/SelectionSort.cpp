// SelectionSort.cpp
// Programa para ordenar un listado de número utilizando un orden de selección

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[10];
	int min, temp, pos;
	
	for(int i=0; i<=9; i++)
		a[i]=rand()%100;
	
	for(int i=0; i<=9; i++)
		std::cout << a[i] << "\t";
	
	std::cout << std::endl;
	std::cout << "La lista despues de ser ordenada es: " << std::endl;
	
	for(int i=0; i<=9; i++)
	{
		min=a[i];
		pos=i;
		
		for(int j=i+1; j<=9; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	
	for(int i=0; i<=9; i++)
		std::cout << a[i] << "\t";
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
