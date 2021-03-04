// InsertioSort.cpp
// Programam para ordenar un listado de números depués de insertarse uno

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[10];
	int min, temp, ptr;
	a[0]=-32678;
	
	for(int i=1; i<=9; i++)
		a[i]=rand()%100;
		
	for(int i=1; i<=9; i++)
		std::cout << a[i] << "\t";
	
	std::cout << std::endl << "El listado ordenado es:" << std::endl;
	
	for(int i=1; i<=9; i++)
	{
		temp=a[i];
		ptr=i-1;
		
		while(temp<a[ptr])
		{
			a[ptr+1]=a[ptr];
			ptr=ptr-1;
		}
		
		a[ptr+1]=temp;
	}
	
	for(int i=1; i<=9; i++)
	{
		std::cout << a[i] << "\t";
	}
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
