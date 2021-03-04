// StopWatch.cpp
// Programa que muestra en pantalla el reloj del sistema parado durante 2 minutos

#include <iostream>
#include <stdlib.h>

int main()
{
	int i, j, k, res, min, seg;
	
	min=0;
	
	for(k=0; k<2; k++)
	{
		seg=0;
		
		for(j=0;j<=59; j++)
			for(i=0; i<=5850; i++)
			{
				if(i==5850)
					seg=seg+1;
				if(seg==60)
					min=min+1;
					
				std::cout << min << "****" << seg << "****" << i << std::endl;
			}
	}
	
	system("pause");
	
	return 0;
}
