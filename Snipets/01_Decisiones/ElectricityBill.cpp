// ElectricityBill.cpp
// Programa para calcular la factura electrica segun lo consumido por el usuario

#include <iostream>
#include <stdlib.h>

int main()
{
	int ud, cud, pud;
	float fact;
	
	std::cout << "Introducir la lectura de luz actual: ";
	std::cin >> cud;
	
	std::cout << "Introduce la lectura anterior: ";
	std::cin >> pud;
	
	ud = cud - pud;
	
	if(ud <= 300)
		fact = 3.0 * ud;
	if(ud > 300 && ud <= 400)
		fact = ((3.5 * ud) + (ud * 0.5 / 100.0));
	if(ud > 400 && ud <= 500)
		fact = ((4.5 * ud) + (ud * 0.7 / 100.0));
	if(ud > 500)
		fact = ((5.0 * ud) + (ud * 0.5 / 100.0));
		
	std::cout << "La factura electrica es: " << fact << std::endl;
	
	system("pause");
	
	return 0;
}
