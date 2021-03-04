// NumberList.cpp
// Programa para obtener el número más elevado de una lista

#include <iostream>
#include <stdlib.h>

int main()
{
	int a[10];							// Declaramos un array a con una dimensión de 10 elementos
	int max=0;
	
	for(int i=0; i<=9; i++)
		a[i]=rand()%100;				// Rellenamos el array con número aleatorios entre 0 y 100
	
	for(int i=0; i<=9; i++)
		if(a[i]>max)
			max=a[i];
	
	std::cout << "L valor maximo del listado es: " << max << std::endl;
	
	for(int i=0; i<=9; i++)
		std::cout << a[i] << "\t";		// El valor de escape '/t' introduce una tabulación
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
