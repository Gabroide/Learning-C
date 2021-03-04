// ArmstrongNumbre.cpp
// Programa para calcular el número de Armstrong entre 1 y 500

#include <iostream>
#include <stdlib.h>

int main()
{
	int h, t, u, res, n, cont;
	
	for(int i=1; i<=500; i++)
	{
		h=i/100;
		res=i%100;
		t=res/10;
		u=res%10;
		cont=((h*h*h)+(t*t*t)+(u*u*u));
		
		if(cont==i)
		{
			std::cout << "El numero de Armstrong es: " << i << std::endl;
		}
	}
	
	system("pause");
	
	return 0;
}
