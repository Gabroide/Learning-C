// CurrencyExchange.cpp
// Programa para calcular el cambio de moneda. El menú de selección es un bucle Switch-Case

#include <iostream>
#include <stdlib.h>

int main()
{
	int n, d;
	float amount;
	
	std::cout << "1. British Pounds" << std::endl;
	std::cout << "2. Georgian Lary" << std::endl;
	std::cout << "3. USA Dollars" << std::endl;
	std::cout << "4. Japanese Yen"<< std::endl;
	std::cout << "5. Chinesse Yen" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter an option: ";
	std::cin >> n;
	
	switch(n)
	{
		case 1:
			std::cout << "Amount of euros: ";
			std::cin >> d;
			amount = 1/0.90 * d;
			std::cout << "The amount of Euros in British Pounds is: " << amount << std::endl;
			break;
		case 2:
			std::cout << "Amount of euros: ";
			std::cin >> d;
			amount = 1/4.01 * d;
			std::cout << "The amount of Euros in Georgian Laries is: " << amount << std::endl;
			break;
		case 3:
			std::cout << "Amount of euros: ";
			std::cin >> d;
			amount = 1/1.23 * d;
			std::cout << "The amount of Euros in USA Dollars is: " << amount << std::endl;
			break;
		case 4:
			std::cout << "Amount of euros: ";
			std::cin >> d;
			amount = 1/126,42 * d;
			std::cout << "The amount of Euros in Japanese Yen is: " << amount << std::endl;
			break;
		case 5:
			std::cout << "Amount of euros: ";
			std::cin >> d;
			amount = 7.92 * d;
			std::cout << "The amount of Euros in Chinese Yen is: " << amount << std::endl;
			break;
	}
	
	system("pause");
	
	return 0;
}
