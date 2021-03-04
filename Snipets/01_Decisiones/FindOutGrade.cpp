// FindOutGrade.cpp
// Programa para asinar el valor de una nota mediante bucles if e else if

#include <iostream>
#include <stdlib.h>

int main()
{
	int mark;
	
	std::cout << "Introduce la nota del examen: ";
	std::cin >> mark;
	
	std::cout << "La nota obtenda es ";
	if(mark >= 85)										// Se mira si la nota es superior a 85
		std::cout << "A+";
	else if(mark >=80)
		std::cout << "A";
	else if(mark >= 75)
		std::cout << "B+";
	else if(mark >=60)
		std::cout << "C+";
	else if(mark >= 50)
		std::cout << "C";
	else
		std::cout << "F";
		
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
