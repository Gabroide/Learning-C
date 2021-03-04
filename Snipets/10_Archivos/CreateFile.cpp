// CreateFile.cpp
// Programa para crear un archivo en modo texto y escribir y leer datos desde el archivo

#include<stdlib.h>
#include <iostream>
#include <fstream>						// Manejador de archivos

int main()
{
	char ch='a';
	float a=25.5;
	int b=50;
	
	std::ofstream add("Test.txt");				// Crear un nuevi archivo en modo texto
	
	if(!add)
	{
		std::cout << "Error abriendo el archvo" << std::endl;
		system("pause");
		
		return 0;
	}
	
	add << ch;
	add << a;
	add << b;
	add.close();
	
	std::ifstream ss("Test.txt");					// Lee el archivo
	
	if(!ss)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		system("pause");
		
		return 0;
	}
	
	ss >> ch;
	ss >> a;
	ss >> b;
	
	std::cout << ch << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	system("pause");
	
	return 0;
}
