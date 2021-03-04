// GuessNumberGame.cpp
// Juego de adivinar el numero escondido que se ha generado de forma aleatoria

#include <iostream>
#include <stdlib.h>

int main()
{
	int n, k, c = 0;
	
	k = rand()%100;																										// Generación de un número aleatorio entre 0 y 100
	
	std::cout << "El ordenador ha seleccionado un numero entre b/w 0 - 100 y lo ha almacenado en memoria" << std::endl;
	
	in:
		std::cout << "Introduce un numero: ";
		std::cin >> n;
		c++;																											// Avanzaos uno en el bucle
		
		if(n > k)
			std::cout << "El nnumero introducido es superior" << std::endl;
		if(n < k)
			std::cout << "El numero introducido es inferior" << std::endl;
		if(n == k)
		{
			system("cls");																								// Limpiamos la pantalla
			std::cout << 	std::endl;																					// Creamos una linea en blanco
			std::cout << "El numero es " << k << std::endl;
			std::cout << "Has encontrado en el intento numero " << c << std::endl;

			system("pause");
			
			exit(0);																									// Detenemos la ejecución del progama
		}
		
		goto in;
}
