// CountingLines.cpp
// Programa para contar elnúmero de líneas de un archivo

#include <iostream>
#include <fstream>

int main()
{
	int l=0;
	
	std::ofstream a("Ejemplo.txt");
	
	a << "Si piensas que la educacion es cara entoces prueba la ignorancia" << std::endl;
	a << "Poder es querer" << std::endl;
	a << "Todos a una" << std::endl;
	a << "Lelo leloSakartvelo"; 
	a.close();

	char str[150];
	
	std::ifstream b("Ejemplo.txt");
	
	while(!b.eof())
	{
		l++;
		b.getline(str,150); 
	}
	
	std::cout << "El numero de lineas es: " << l << std::endl;
	
	system("pause");
}

