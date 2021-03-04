// SquareRoot.cpp
// Programa para calcular la raíz cuadrada de un número utilizando una función

#include <iostream>
#include <stdlib.h>
#include <math.h>									// Incluye la función para calcular la raíz cuadrada

int main()
{
	int n;
	float res;
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	res=sqrt(n);
	
	std::cout << "Su raiz cuadrada es: " << res << std::endl;
	
	system("pause");
	
	return 0; 
}
