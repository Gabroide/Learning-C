// SquareRoot.cpp
// Programa para calcular la ra�z cuadrada de un n�mero utilizando una funci�n

#include <iostream>
#include <stdlib.h>
#include <math.h>									// Incluye la funci�n para calcular la ra�z cuadrada

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
