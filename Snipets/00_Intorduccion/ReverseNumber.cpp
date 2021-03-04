// ReverseNumber.cpp
// Programa para calcular el numero inverso de uno dado

#include <iostream>
#include <stdlib.h>

int main()
{
	unsigned int y, u, t, h, th, res;		// Declaración de enteros son signo
	
	std::cout << "Introduce un numero de cuatro cifras: ";
	std::cin >> y;
	
	th=y/1000;
	res=y%1000;							// El simbolo % sirve para calcular el residuo
	h=res/100;
	res=res%100;
	t=res/10;
	res=res%10;
	u=res/1;
	
	std::cout << "El numero invertido es: " << u << t << h << th << std::endl;
	
	system("pause");
	
	return 0;
}
