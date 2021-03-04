// SmallerNumber.cpp
// Programa para encontrar el numero mas pequeño de un listado dado

#include <iostream>
#include <stdlib.h>

void minint(int arr[], int m);

int main()
{
	int arr[10]={15, 2, 3, 5, 4, 10, 9, 7, 8, 6};
	
	minint(arr, 10);
	
	system("pause");
	
	return 0;
}

void minint(int arr[], int m)
{
	int temp;
	
	temp=arr[0];
	
	for(int i=0; i<m; i++)
	{
		if(arr[i]<temp)
			temp=arr[i];
	}
	
	std::cout << "El valor menor es: " << temp << std::endl;
}
