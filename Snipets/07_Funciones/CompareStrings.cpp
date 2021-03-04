// CompareStrings.cpp
// Programa para comparar strings

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <process.h>

void strcom(char *a, char *b);

int main()
{
	char s1[100], s2[100];
	int f;
	
	std::cout << "Introduce la primera cadena: ";
	gets(s1);
	
	std::cout << "Introduce la segunda cadena: ";
	gets(s2);
	
	strcom(s1,s2);											// Comparamos las cadenas
	
	system("pause");
	
	return 0;
}

void strcom(char *str1, char *str2)
{
	int m=0;
	int n=0;
	
	for(int i=0; i<strlen(str1); i++)
	{
		if(str1[i]==str2[i])
			m=m+1;
		
		if(m==strlen(str1))
			std::cout << "Ambas cadenas son iguales" << std::endl;
	}
	
	for(int i=0; i<strlen(str1); i++)
	{
		n=(str1[i]-str2[i]);
		
		if(n<0)
			std::cout << "La cadena 1 primero" << std::endl;
		else if(n>0)
			std::cout << "La cadena 2 primero" << std::endl;
	}
}
