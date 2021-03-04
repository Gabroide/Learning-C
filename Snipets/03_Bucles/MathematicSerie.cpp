// MathematicsSeries.cpp
// Programa para mostrar la suma de series matemáticas

#include <iostream>
#include <stdlib.h>

int main()
{
	double res, p, b;
	float res2, n, n2;
	
	std::cout << "Introduce la base del numero: ";
	std::cin >> b;
	
	std::cout << "Introduce la potencia del numero: ";
	std::cin >> p;
	
	res=1;
	n=0.0;
	
	std::cout << "La Serie 1";
	
	for(int i=1; i	<=p; i++)
	{
		res=res*b;
		
		std::cout <<"+1/" << res;
		
		res2=1.0/res;
		n=n+res2;
	 }
	 
	 n2=1+n;
	 
	 std::cout << " = " << n2 << std::endl;
	 
	 system("pause");
	 
	 return 0;
	
}
