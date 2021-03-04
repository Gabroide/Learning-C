// ResultSheet.cpp
// Programa para mostrar las notas de un estudiante por pantalla

#include <iostream>
#include <stdlib.h>

struct res									// Definimos como es la estructura res
{
	int id;
	char nombre[30];
	int mates;
	int fisica;
	int c;
};

struct res a[5];							// Declaramos una estructura a (en este caso un array de 5 valores) del tipo res

int main()
{
	int total, avg;
	
	for(int i=0; i<=4; i++)
	{
		std::cout << "nombre: ";
		std::cin >> a[i].nombre;			// Asignamos un valor al primer campo de la estructura a
		
		std::cout << "id: ";
		std::cin >> a[i].id;
		
		std::cout << "Matematicas: ";
		std::cin >> a[i].mates;
		
		std::cout << "Fisica: ";
		std::cin >> a[i].fisica;
		
		std::cout << "C++: ";
		std::cin >> a[i].c;
	}
	
	std::cout << "Nombre	id		mates		fisica		C++		Total		Avg		Nota" << std::endl;  
	
	for(int i=0; i<=4; i++)
	{
		total=a[i].mates + a[i].fisica + a[i].c;
		avg = total/3.0;
		
		std::cout << a[i].nombre << "	" << a[i].id << "		" << a[i].mates << "		" << a[i].fisica << "		" << a[i].c << "		" << total << "		" << avg << "		";
		if(avg>=80)
			std::cout << "A" << std::endl;
		else if(avg>=70 && avg<=79)
			std::cout << "B" << std::endl;
		else if(avg>=60 && avg <=69)
			std::cout << "C+" << std::endl;
		else if(avg>=50 && avg<=59)
			std::cout << "C" << std::endl;
		else
			std::cout << "Fail" << std::endl;	
	}
	
	system("pause");
	
	return 0;
}
