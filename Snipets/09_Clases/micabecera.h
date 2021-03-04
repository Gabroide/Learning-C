// Constructor.cpp
// Programa para mostrar los atributos utilizados por el archivo de vabecera del constructor
//
// En este programa se puede aprender como crear un archivo de cabecera creado por el usuario.
// 
// Header file

#ifdef micabecera						// Inicio del archivo de cabecera
#define micabecera
#include <iostream>

class employee
{
	private:
		int edad;
		int anyos;
		float salario;
		
	public:
		employee();						// Constructor
		{
			edad=0;
			anyos=0;
			salario=0;
		}
		
		void input()
		{
			std::cout << "Introduce la edad del empleado: "	;
			std::cin >> edad;
			std::cout << "Introduce los anyos trabajados: ";
			std::cin >> anyos;
			std::cput << "Introduce el salario del empleado: ";
			std::cin >> salario;
		}
		
		void dis()
		{
			std::cout << "Edad: " << edad << std::endl;
			std::cout << "Anyos trabajados: " << anyos << std::endl;
			std::cout << "Salario: " << salario << std::endl;
		}
};

#endif								// Fin del ficherode cabera
