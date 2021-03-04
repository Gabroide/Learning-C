// Factorial.cpp
// Programa para calcular elFactorial de un numero introducido
// Para el cálculo del factorial se utiliza un bucle for

#include <iostream>
#include <stdlib.h>

int main()
{
	int i,n;
	double res;
	
	std::cout << "Introduce un numero: ";
	std::cin >> n;
	
	res = 1;
	for(i=1; i<=n; i++)
		res = res * i;
		
	std::cout << "El factorial del numero dado es: " << res << std::endl;
	
	system("pause");
	
	return 0;
}
