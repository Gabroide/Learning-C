// 	RomanNumbers.cpp
// Programa para mostrar el numero introducido como un numero romano

#include <iostream>
#include <stdlib.h>

int main()
{
	int y, h, t, u, res;
	
	std::cout << "Introduce un numero entre 1 - 999: ";
	std::cin >> y;
	
	h = y/100;
	res = y%100;
	t = res/10;
	res = res%10;
	u = res/1;
	
	std::cout << "El numero romano es: ";
	
	switch(h)
	{
		case 1:
			std::cout << "C";
			break;
		case 2:	
			std::cout << "CC";
			break;
		case 3:
			std::cout << "CCC";
			break;
		case 4:
			std::cout << "CD";
			break;
		case 5:
			std::cout << "D";
			break;
		case 6:
			std::cout << "DC";
			break;
		case 7:
			std::cout << "DCC";
			break;
		case 8:
			std::cout << "DCCC";
			break;
		case 9:
			std::cout << "CM";
			break;
	}
	
	switch(t)
	{
		case 1:
			std::cout << "X";
			break;
		case 2:
			std::cout << "XX";
			break;
		case 3:
			std::cout << "XXX";
			break;
		case 4:
			std::cout << "XL";
			break;
		case 5:
			std::cout << "L";
			break;
		case 6:
			std::cout << "LX";
			break;
		case 7:
			std::cout << "LXX";
			break;
		case 8:
			std::cout << "LXXX";
			break;
		case 9:
			std::cout << 	"XC";
			break;
	}
	
	switch(u)
	{
		case 1:
			std::cout << "I";
			break;
		case 2:
			std::cout << "II";
			break;
		case 3:
			std::cout << "III";
			break;
		case 4:
			std::cout<< "IV";
			break;
		case 5:
			std::cout << "V";
			break;
		case 6:
			std::cout << "VI";
			break;
		case 7:
			std::cout << "VII";
			break;
		case 8:
			std::cout << "VIII";
			break;
		case 9:
			std::cout << "IX";
			break;
	}
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
