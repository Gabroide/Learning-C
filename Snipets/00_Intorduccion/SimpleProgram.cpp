// SimpleProgram.cpp
// Elprograma muestra un mensaje por pantalla
#include <iostream> 						// Fichero preprocesado o de cabecera para sentencias de salida
#include <stdlib.h>							// Fichero de cabecera para limpiar la funci�n de pantalla

int main ()									// Funci�n pricipal del programa, es indispensable para marcar donde se debe empezar a ejecutar el programa
{	
	system("cls");							// Funci�n para kimpiar la pantalla
	std::cout << "Hello World of C++" << std::endl;		// Estamente de salida
	system("pause");						// Pause the execution of the code
	
	return 0;
}
