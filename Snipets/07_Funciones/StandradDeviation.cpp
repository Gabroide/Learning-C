// StandradDeviation.cpp
// Programa para el cálculo d la desviación estándard

#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	float sd, sum, pr, res, sum1, cont, div, res1;
	sum=0;
	res=0;
	cont=0;
	
	for(int j=1; j<=9; j++)
	{
		sum=sum+a[j];
		pr=a[j]*a[j];
		cont=cont+pr;
		res=res+pr;
		div=cont/10;
		sum1=(sum*sum)/(10*10);
		res1=div-sum1;
		sd=sqrt(res1);
		
		std::cout << a[j] << "\t" << pr << "\t" << pr-a[j] << std::endl;
	}
	
	std::cout << "La desviacion estandard es: " << sd << std::endl;
	
	system("pause");
	
	return 0;
	
}

