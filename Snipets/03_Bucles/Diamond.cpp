//Diamond.cpp
//Programa para dibujar un diamante en pantalla

#include <iostream>
#include<stdlib.h>
#include <stdio.h>

int main()
{
	int n;
	int esp = 1;
	
	std::cout << "Inserta el numero de filas y columnas: ";
	std::cin >> n;
	
	esp=n-1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=esp; j++)
			std::cout << " ";
		
		esp--;
		
		for(int j=1; j<=2*i-1; j++)
			if(j%2==0)
				std::cout << "*";
			else
				std::cout <<" ";
			
		std::cout << std::endl;
	}
	
	esp=1;
	
	for(int i=1; i<=n-1; i++)
	{
		for(int j=1; j<=esp; j++)
			std::cout << " ";
		esp++;
		
		for(int j=1; j<=2*(n-i)-1; j++)
			if(j%2==0)
				std::cout << "*";
			else
				std::cout << " ";
				
		std::cout << std::endl;
	}
	
	system("pause");
	
	return 0;
}
