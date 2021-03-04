// MatrixAddition.cpp
// Programam para sumar dos matrices

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[3][3], b[3][3], res[3][3];									// Una matriz está formada por un array de dos dimensiones
	
	for(int i=0; i<=2; i++)
		for(int j=0; j<<=2; j++)
			a[i][j]=rand()%9;
			
	for(int i=0; i<=2; i++)
		for(int j=0; j<=2; j++)
			b[i][j]=rand()%9;
		
		
	// Calculamos res
	for(int i=0; i<=2; i++)
		for(int j=0; j<=2; j++)
			res[i][j]=a[i][j]+b[i][j];
		
		
	std::cout<< "A" << std::endl;		
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
			std::cout << a[i][j] << " ";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "B" << std::endl;
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
			std::cout << b[i][j] << " ";
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "A+B" << std::endl;
	for(int i=0; i<=2; i++)
		for(int j=0; j<=2; j++)
			std::cout << b[i][j];
		
		system("pause");
		
		return 0;
}
