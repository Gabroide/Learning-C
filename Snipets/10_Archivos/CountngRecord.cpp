// CountingRecord.cpp
// PRograma para abrir un fichero binario y contar el número total de resgistros

#include <iostream>
#include <fstream>
#include <process.h>
#include <stdlib.h>

class reg
{
	protected:
		int roll;
		int long tfn;
		char nombre[100];
};

int man()
{
	int n;
	reg r;
	
	std::ifstream primero("temp.bin", 
	std::ios::bnary | std::ios::in);
	
	if(!primero)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	primero.seekg(0, std::ios::end);
	
	int finPos = primero.tellg();
	n = finPos/sizeof(r);
	
	std::cout << "El numero de registros es: " << n << std::endl;
	
	system("pause");
	
	return 0;
}
