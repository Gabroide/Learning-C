// PreprocessorDirectives.cpp
//Programa donde se muestran un ejemplo de preprocesadores y se declaran por primer vez tres constantes

#include <iostream>
#include <stdlib.h>

#define AND &&				// Definimos la constante AND
#define OR ||				// Definimos la constante OR
#define NOT !				// Definimos la constante NOT 
int main()
{
	int c, d, n;
	
	std::cout << "Introduce un valor para n: ";
	std::cin >> n;
	
	std::cout << "Introduce un valor para c: ";
	std::cin >> c;
	
	std::cout << "Introduce un valor para d: ";
	std::cin >> d;
	
	if((n > c AND n > d) OR (d < n AND c !=d))
		std::cout << "Este es un ejemplo de preprocesadores" << std::endl;
	else
		std::cout << "El codigo anterior es incorrecto" << std::endl;
		
	system("pause");
	
	return 0;
}
