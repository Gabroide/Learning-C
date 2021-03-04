// IfeIfAnidado.cpp
// Programa para saber si el numero introducido es par o impar utilizando un bucle if

#include <iostream>
#include <stdlib.h>

int main()
{
	int n;
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	if(n%2 == 0)								// Calculamos el residuo del numero al dividirlo entre 2. Si el residuo es 0 el numero es par
		std::cout << "El numero introducido es par" << std::endl;
	else
		std::cout << "El numero introducido es impar" << std::endl;
	
	system("pause");
	
	return 0;
}
