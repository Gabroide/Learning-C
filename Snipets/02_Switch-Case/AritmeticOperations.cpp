// AritmeticOperations.cpp
// Programa para resolver operaciones aritméticas

#include <iostream>
#include <stdlib.h>

int main()
{
	int x, y, res;
	char z;
	
	std::cout << "Introduce el valor de x: ";
	std::cin >> x;
	
	std::cout << "INtroduce el valor de y: ";
	std::cin >> y;
	
	std::cout << "INtroduce la operacion matematica (+, -, *, /): ";
	std::cin >> z;
	
	switch(z)
	{
		case '+':
			res = x + y;
			break;
		case '-':
			res = x - y;
			break;
		case '*':
			res = x * y;
			break;
		case '/':
			res = x / y;
			break;
	}
	
	std::cout << "El resultado es: " << res << std::endl;
	
	system("pause");
	
	return 0;
}
