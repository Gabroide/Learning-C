// CaseConversion.cpp
// Programa para convertir las minusculas en mayusculas

#include <iostream>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char ch;
	char arr[5];									// Declaramos un array de caracteres
	int i=1;
	
	for(int i=0; i<=4; i++)
		std::cin >> arr[i];
		
	while(arr[i]!=27)
	{
		std::cout << arr[i];
		i++;
		
		arr[i]=arr[i-1];
		int k=arr[i]-32;
		i--;
		
		arr[i]=getch();
		std::cout << char(k);
		i++;
	}
	
	system("pause");
	
	return 0;
}
