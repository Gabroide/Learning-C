// ClassSearchName.cpp
// Programam para buscar un registro en un archivo binario utilizando una clase

#include <iostream>
#include <fstream>
#include <string.h>

class reg
{
	private:
		char nombre[100];
		
	public:
		char roll[100];
		
		void input()
		{
			std::cout << "Introduce el nombre entero: ";
			gets(nombre);
			
			std::cout << "introduce el rol: ";
			gets(roll);
		}
			
		void dis()
		{
			system("clear");
			puts(nombre);
			puts(roll);
		}
};

int main()
{
	char froll[100];
	int t=0;
	long int rn=0;
	char ch='y';
	reg r;
	
	system("cls");
	
	std::ofstream fir("abc.teg", std::ios::binary);
	
	if(!fir)
	{
		std::cout << "Error al abrir el archivo" << std::endl;
		system("pause");
		
		return 0;
	}
	
	std::cout << "Introduce los nombres en el archivo" << std::endl;
	
	while(ch!='n')
	{
		r.input();
		fir.write((char *) &r, sizeof(r));
		
		std::cout << "Quieres introducir el numevo registro? (s/n): ";
		std::cin >> ch;
	}
	
	fir.close();
	
	std::ifstream sec("abc.reg", std::ios::binary);
	
	if(!sec)
	{
		std::cerr << "Error abriendo el archivo";
		system("pause");
		
		return 0;
	}
	
	std::cout << std::endl;
	std::cout << "Introduce el numero de rol: ";
	std::cin >> froll;
	
	while(sec.read((char *)&r, sizeof(r)))
	{
		if(strcmp(froll,r.roll)==0)
		{
			rn=(rn-1)*sizeof(r);
			sec.seekg(rn);
			r.dis();
			sec.close();
			t=1;
		}
		
		rn++;
	}
	
	if(t==0)
		std::cout << "El nombre no existe" << std::endl;
		
	system("pause");
	
	return 0;
}
