// TempConvetionToCentigrade.cpp
// Programa para convertir la temperatura de grados Farehenits a Cent�grados

#include <iostream>
#include <stdlib.h>

int main(){
	float ftemp, ctemp;											// Declaraci�n de las variables
	
	std::cout << "Introduce una temperatura en Farenheits: ";
	std::cin >> ftemp;
	
	ctemp=((ftemp-32.0)*5.0/9.0);								// Calculamos la conversi�n de la temperatura
	std::cout << "La temperatura engrados centigrados es:  " << ctemp << std::endl;
	
	system("pause");
	
	return 0;
}
