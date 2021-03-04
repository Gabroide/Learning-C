// ModoBinario.cpp
// Programa para crear un archivo binario y escribir datos en el mismo

#include <iostream>
#include <fstream>
#include <stdlib.h>

class rec
{
	private:
		int roll;
		int long tfn;
		char name[100];
	
	public:
		input()
		{
			std::cout << "introduce un nombre: ";
			std::cin >> name;
			std::cout << "Introduce un rol: ";
			std::cin >> roll;
			std::cout << "Introduce un numero de telefono: ";
			std::cin >> tfn;
		}
};

int main()
{
	char na[100];
	char ch;
	ch='y';
	rec r;
	
	std::cout << "Introduce el nombre del archivo: ";
	std::cin >> na;
	
	
	std::ofstream add(na, std::ios::binary | std::ios::app);				// Modo binario
	
	while(ch!='n')
	{
		r.input();
		
		add.write((char *) &r, sizeof(r));
		
		std::cout << "Quieres introducir un nuevo dato (y/n): ";
		std::cin >> ch;
	}
	
	system("pause");
	
	return 0;
}
