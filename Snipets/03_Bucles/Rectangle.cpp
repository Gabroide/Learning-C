// Rectangle.cpp
// Programa para dibujar un rectangulor en pantalla de una altura y un ancho dado

#include <iostream>
#include <stdlib.h>

int main()
{
	int alto, ancho;
	
	std::cout << "Inserta el ancho del rectangulo: ";
	std::cin>> ancho;
	
	std::cout << "Inserta el alto del rectangulo: ";
	std::cin >> alto;
	
	for(int i=1; i<=alto; i++)
	{
		for(int j=1; j <=ancho; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
	
	system("pause");
	
	return 0;
}
