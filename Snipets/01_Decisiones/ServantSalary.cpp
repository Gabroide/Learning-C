// ServantSalary.cpp
// Programa para calcular el salario de un empleado

#include <iostream>
#include <stdlib.h>

int main()
{
	int horas, precio, tiempoExtra, pago, tPago, total;

	std::cout << "Introduce las horas de servicio: ";
	std::cin >> horas;
	
	std::cout << "Introduce el precio de la hora: ";
	std::cin >> precio;
	
	if(horas >40)
	{															// Cuando un bucle if contienen más de una línea de instrucción, éstas deben ir entre claudators {}
		tiempoExtra = horas - 40;
		pago = 40 * precio;
		tPago = tiempoExtra * 2 * precio;
		total = pago + tPago;
	}
	else 
		total = horas * precio;
	
	std::cout << "El salario total del empleado es: " << total << std::endl;
	
	system("pause");
	
	return 0;	
}
