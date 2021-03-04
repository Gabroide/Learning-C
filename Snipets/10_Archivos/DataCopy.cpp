// DataCopy.cpp
// Programam para copiar datos desde un archivo a otro archivo

#include <iostream>
#include <fstream>

int main()
{
	char ch;
	
	std::ifstream add("Ejemplo.txt");
	std::ofstream sec("Sample.txt");
	
	if(!add)
	{
		std::cout << "Error abriendo el archivo" << std::endl;
		
		system("pause");
		
		return 0;
	}
	
	while(add)
	{
		add.get(ch);
		sec.put(ch);
	}
	
	std::cout << "El archivo ha sido copiado" << std::endl;
	
	system("pause");
	
	return 0;
}
