// VowelCharacter.cpp
// Programa para decir si el caracter introducido es una vocal o una consonante

#include <iostream>
#include <stdlib.h>

int main()
{
	char y;
	
	std::cout << "Pulsa cualquier caracter: ";
	std::cin >> y;
	
	switch(y)																		// Inicio del bucle switch
	{
		case 'a':																	// Se entra en el bloque en caso de que el caracter introducido sea una a
			std::cout << "El caracter introducido es una vocal" << std::endl;
			break;																	// se sale del bucle switch
		case 'e':
			std::cout << "El caracter introducido es una vocal" << std::endl;
			break;
		case 'i':
			std::cout << "El caracter introducido es una vocal" << std::endl;
			break;
		case 'o':
			std::cout << "El caracter introducido es una vocal" << std::endl;
			break;
		case 'u':
			std::cout << "El caracter introducido es una vocal" << std::endl;
			break;
		default:																	// Se entra en el bloque en caso de que los supuestos anteriores no se cumplan
			std::cout << "El caracter introducido no es una vocal" << std::endl;
	}

	system("puse");
	
	return 0;
}
