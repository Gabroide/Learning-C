// OverloadingOperator2.cpp
// Programa para sobrecargar el operador binario [ ]

#include <iostream>
#include <stdlib.h>
#include <process.h>

const int lim=10;

class array
{
	private:
		int arr[lim];
		
	public:
		int& operator [](int n)
		{
			if(n<0 || n>=lim)
			{
				std::cout << "Indice fuera de rango" << std::endl;
				system("pause");
			}
			
			return arr[n];
		}
};

int main()
{
	array sal;
	for(int i=0; i<lim; i++)
	{
		sal[i]=i*10;
	}
	
	for(int j=0; j<lim; j++)
	{
		int temp=sal[j];
		
		std::cout << "El elemento " << j << " es " << temp << std::endl;
	}
	
	system("pause");
	
	return 0;
}
