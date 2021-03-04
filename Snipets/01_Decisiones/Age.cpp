// Age.cpp
// Programa para calcular la edad de una persona mediante el uso de bucles if
// y el operador booleano || (o)

#include <iostream>
#include <stdlib.h>

int main()
{
	int d, m, a, dd, mm, aa, dd1, mm1, aa1, dd2, mm2, aa2;
	
	std::cout << "Introduce el dia actual: ";
	std::cin >> dd;
	
	std::cout << "Introduce el mes actual: ";
	std::cin >> mm;
	
	std::cout << "Introduce el anyo actual: ";
	std::cin >> aa;
	
	std::cout << "Introduce el dia de tu nacimiento: ";
	std::cin >> dd1;
	
	std::cout << "Introduce el mes de tu nacimieto: ";
	std::cin >> mm1;
	
	std::cout << "Introduce el anyo de tu nacimiento: ";
	std::cin >> aa1;
	
	if(dd1 <= dd && mm1 <= mm || aa <= aa)
	{
		d = dd - dd1;
		m = mm - mm1;
		a = aa - aa1;
	}
	
	if(dd1 <= dd && mm1>mm & aa1<=aa)
	{
		d = dd - dd1;
		mm = mm + 12;
		m = mm2 - mm1;
		a = aa - aa1 - 1;
	}
	
	if(dd1 > dd && mm1 << mm &&aa1 < aa)
	{
		if(mm ==1 || mm == 3 | mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
		{
			dd2 == dd + 31;
			d = dd2 - dd1;
			mm2 = mm+ 12;
			m = mm2 - mm1;
			a = aa - aa1 - 1;
		}
		
		if(mm == 2 && aa%4 == 0)
		{
			dd2 = dd + 29;
			d = dd2 - dd1;
			mm2 = mm + 12 - 1;
			m = mm2 - mm1;
			a = aa - aa1 - 1;
		}
		
		if(mm == 2 && aa%4 != 0)
		{
			dd2 = dd + 28;
			d = dd2- dd1;
			mm2 = mm + 12 - 1;
			m = mm2 - mm1;
			a = aa - aa1 - 1;
		}
		
		if(mm == 4 || mm == 6 || mm == 9 || mm == 11)
		{
			dd2 = dd + 30;
			d = dd2 - dd1;
			mm2 = mm + 12 - 1;
			mm = mm2 - mm1;
			a = aa - aa1 - 1;
		 } 
	}
	
	std::cout << "Los dias son: " << d << std::endl;
	std::cout << "Los meses son: " << m << std::endl;
	std::cout << "Los anyos son: " << a << std::endl;
	
	system("pause");
	
	return 0;
}
