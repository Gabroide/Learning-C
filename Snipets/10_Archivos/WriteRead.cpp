// WriteRead.cpp
// Programam para copiar un string en un archivo y después leerlo y mostrarlo en pantalla

#include<iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

int main()
{
	char ch;
	char str[]="Si quiere realizar tus suenyos, levantate";
	
	std::ofstream add("Texto.txt");
	
	if(!add)
	{
		std::cout << "Error arbiendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	int m=strlen(str);
	
	for(int i=0; i<m;i++)
	{
		add.put(str[i]);
	}
	
	add.close();
	
	std::ifstream ss("Texto.txt");
	
	if(!ss)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	while(ss)
	{
		ss.get(ch);
		
		std::cout << ch;
	}
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
	
}
