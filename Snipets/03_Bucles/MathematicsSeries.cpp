// MathematicsSeries.cpp
// Programa para calcular el término enésimo de un Factorial

#include <iostream>
#include <stdlib.h>

int main()
{
	int n;
	float res, j, k;
	
	std::cout << "Introduce cualquier numero: ";
	std::cin >> n;
	
	res = 1;
	k = 0;
	
	for (int i=1; i<=n;i++)
	{
		res=res*i;
		j=i/res;
		k=k+j;
	}
	
	std::cout << "1/1! + 2/2! + 3/3! + 4/4! + ... + n/n! = " << k << std::endl;
	
	system("pause");
	
	return 0;
}
