// SearchName.cpp
// Programa para buscar un registro de un archivo

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

struct registro
{
	char nombre[15];
};

int main()
{
	char ch='y';
	char fNombre[15];
	int t=0;
	int rn=0;
	
	registro reg;
	
	std::ofstream arch("abc.reg", std::ios::binary);
	
	if(!arch)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	while(ch!='n')
	{
		std::cout << "Introduce un nombre: ";
		std::cin >> reg.nombre;
		
		arch.write((char*)&reg, sizeof(reg));
		
		std::cout << "Quieres introducir mas regustros? ";
		std::cin >> ch;
	}
	
	arch.close();
	
	std::ifstream sec("abc.reg", std::ios::binary);
	
	if(!sec)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	std::cout << std::endl;
	std::cout << "Introduce el nombre a buscar: ";
	std::cin >> fNombre;
	
	while(sec.read((char*)&reg, sizeof(reg)))
	{
		if(strcmp(fNombre, reg.nombre)==0)
		{
			rn=((rn-1)*sizeof(reg));
			sec.seekg(rn);
			
			std::cout << "Se ha encontrado el nombre introducido: " <<  reg.nombre << std::endl;
			
			sec
			.close();
			
			t=1;
		}
		
		rn++;
	}
	
	if(t==0)		
		std::cout << "El nombre no existe" <<std::endl;
		
	system("pause");
		
	return 0;
}
