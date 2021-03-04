// TableOfNumber.cpp
// Programa para calcular la tabla de multiplicar de un número utilizando la sentencia goto
// No se aconseja abusar de esta sentencia al ser fácil perder el flujo del programa

#include <iostream>
#include <stdlib.h>

int main()
{
	int producto, contador, n;
	
	std::cout << "introduce el numero para generar la tabla: ";
	std::cin >> n;
	
	contador = 1;																// contador para avanzar en el bucle
	
	in:																			// Etiqueta para la sentencia goto
	producto = n * contador;
	std::cout << n << " * " << contador << " = " << producto << std::endl;
	contador = contador + 1;												// Sumamos 1 al contador
	
	if(contador <= 10)
		goto in;															// Se regreesa a la etiqueta in
		
	system("pause");
	
	return 0;
}
