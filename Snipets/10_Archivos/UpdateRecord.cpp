// UpdateRecord.cpp
// Programa para actualizar un registro binario.

#include <iostream>
#include <fstream>
#include <process.h>
#include <stdlib.h>

class reg
{
	protected:
		int pos;
		int long tfn;
		char nombre[20];
		
	public:
		input()
		{
			std::cout << "Introduce un nombre: ";
			std::cin >> nombre;
			
			std::cout << "Introduce la posicion: ";
			std::cin >> pos; 
			
			std::cout << "Introduce el numero de telefono: ";
			std::cin >> tfn;
		}
		
		dis()
		{
			std::cout << nombre << "\t" << pos << "\t" << tfn << std::endl;
		}
};

int main()
{
	int regn, n;
	reg r;
	std::fstream fir("temp.bin", std::ios::binary | std::ios::in | std::ios::out);
	
	if(!fir)
	{
		std::cout << "Error al abrir el archivo" << std::endl;
		system("pause");
		return 0;
	}
	
	fir.seekg(0, std::ios::end);
	
	int findp=fir.tellg();
	n=findp/sizeof(r);
	
	std::cout << "Nº de registros en el fichero: " << n << std::endl;
	std::cout << "Pulsar cualquier tecla" << std::endl;
	system("pause");
	std::cout << "Introduce el numero del registro a actualizar: ";
	std::cin >> regn;
	
	long int posn=(regn-1)*sizeof(r);
	
	fir.seekg(posn);
	
	std::cout << "Se va a modificar el registro" << std::endl;
	
	fir.read((char*) &r, sizeof(r));
	r.dis();
	
	std::cout << "Introduce la nueva entrada" << std::endl;
	fir.seekg(posn);
	r.input();
	fir.write((char*) &r, sizeof(r));
	
	std::cout << "El registro se ha modificadosatisfactoriamente" << std::endl;
	
	system("pause");
	
	return 0;
}
