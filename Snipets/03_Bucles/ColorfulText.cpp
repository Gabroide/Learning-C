// ColourfullText.cpp
// Programa mostrar un texto en diferentes colores

#include <iostream>
#include<stdlib.h>
#include <graphics.h>									// Librería para poder colorear el texto//


int main()
{
	int i=1;
	
	while(i<16)
	{
		setcolor(i);					// Selecciona un color dependiendo del valor de la variable i
		std::cout << i;				// Muestra por pantalla un texto en color
		i++;
	}
	
	system("pause");
	
	return 0;
}
