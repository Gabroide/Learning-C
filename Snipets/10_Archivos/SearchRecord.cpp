// SearchRecord.cpp
// Pograma para buscar unregistro de un archi binario

#include <iostream>
#include <fstream>
#include <stdlib.h>

class reg
{
	protected:
		int roll;
		int long tfn;
		char nombre[00];
		
	public:
		dis()
		{
			std::cout<< nombre << "\t" << roll << "\t" << tfn << std::endl;
		}
};

int main()
{
	int n;
	reg r;
	
	std::ifstream primero("temp.bin", std::ios::binary | std::ios::in);
	
	if(!primero)
	{
		std::cout << "Error abriendo el fichero" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	primero.seekg(0);
	
	std::cout << "Introduce el numero de registros: ";
	std::cin >> n;
	
	long int pos=(n-1)*sizeof(r);
	primero.seekg(pos);
	r.dis();
	
	system("pause");
	
	return 0;
}
