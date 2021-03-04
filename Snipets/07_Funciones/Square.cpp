// Square.cpp
// Programa para calcular cuadrados

#include <iostream>
#include <stdlib.h>
#include <iomanip>

int main()
{
	int res;
	
	for(int i=1; i<=10; i++)
	{
		res=i*i;
		
		std::cout << i << std::setw(6) << res << std::endl;
	}
	
	system("pause");
	
	return 0;
}
