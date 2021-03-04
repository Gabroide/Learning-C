// ASCIITable.cpp
// Programa para mostrar la tabla ASCII por pantalla

#include <iostream>
#include <stdlib.h>

int main()
{
	char ch;
	
	for(int i=255; i>=0; i--)
	{
		std::cout << char(i);
	}
	
	system("pause");
	
	return 0;
}
