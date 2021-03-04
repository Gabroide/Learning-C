// DOSShell.cpp
// Programa para mostrar el archivo utiliando la línea de comandos del compilador

#include <iostream>
#include <fstream>
#include <process.h>
#include <stdlib.h>

int main(int a, char* b[])			// Utilizando la línea de comandos para mostrar el archivo
{
	char ch;
	
	std::ifstream add(b[1]);
	
	if(!add)
	{
		std::cout << "Error al abrir el archivo" << std::endl;
		system("pause");
		return 0;
	}
	
	if(a!=2)
	{
		std::cout << "Error de sintaxis" << std::endl;
		system("pause");
		return 0;
	}
	
	while(add)
	{
		add.get(ch);
		
		std::cout << ch;
	}
	
	system("pause");
	
	return 0;
}
