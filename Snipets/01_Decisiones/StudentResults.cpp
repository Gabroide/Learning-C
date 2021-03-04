// StudentResults.cpp
// Programa para calcular el resultado de las notas de los estudiantes dada por el estudiante
//Para ello se utiliza un if con una doble condicion en su interior mediante un operador booleano

#include <iostream>
#include <stdlib.h>

int main()
{
	int info, fisica, mates, ing, esta, total;
	float avg;
	
	std::cout << "Infroduce la nota de informatica: ";
	std::cin >> info;
	
	std::cout << "Introduce la nota de fisica: ";
	std::cin >> fisica;
	
	std::cout << "Introduce la nota de matematicas: ";
	std::cin >> mates;
	
	std::cout << "Introduce la nota de ingles: ";
	std::cin >> ing;
	
	std::cout << "Introduce la nota de estadistica: ";
	std::cin >> esta;
	
	total = info + fisica + mates + ing + esta;
	avg = ((total/500.0)*100.0);
	
	std::cout << "La nota total obtenida por el estudiante es: " << total << std::endl;
	std::cout << "La nota media es: " << avg << std::endl;
	
	std::cout << "La nota fina es ";
	if(avg >= 85)
		std::cout << "A+";
	if(avg >= 75 && avg <= 84)																// Se mira si el resultado esta entre 75 y 84
		std::cout << "A";
	if(avg >= 60 && avg <= 74)
		std::cout << "B";
	if(avg >= 50 && avg <= 59)
		std::cout << "C";
	if(avg < 50)
		std::cout << "F";
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
