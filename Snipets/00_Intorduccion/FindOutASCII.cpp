// FindOutASCII.cpp
// Programa para convertir caracteres en sus símbolos ASCII

#include <iostream>
#include<stdlib.h>

int main()
{
	int n, n1;
	char ch, ch1;			// Declaración de variables char
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	ch=n;
	std::cout << "El caracter del numero dado es: " << ch << std::endl;
	
	std::cout << "Pulsa cualquier caracter del teclado: ";
	std::cin >> ch1;
	
	n1=ch1;
	std::cout << "El numero del caracter introducido es: " << n1 << std::endl;
	
	system("pause");
	
	return 0;
}
