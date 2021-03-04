// CharacterCounting.cpp
// Programa para contar los caracteres contenidos en un string

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i, j, n, k, o;
	
	i=0;
	j=0;
	k=0;
	o=0;
	
	puts("Introduce una frase");
	gets(str);
	
	n=strlen(str);
	
	while(str[i]!='\0')
	{
		if((str[i]>=65) &&(str[i]<97))
			j++;
			
		if((str[i]>=97) &&(str[i]<122))
			k++;
			
		if(str[i]==' ')
			o++;
			
		i++;
	}
	
	std::cout << "El numero total de letras es: " << n << std::endl;
	std::cout << "El numero de letras mayusculas es: " << j << std::endl;
	std::cout << "El numero de letras minusculas es: " << k << std::endl;
	std::cout << "El numero de espacios en blanco es: " << o << std::endl;
	
	system("pause");
	
	return 0;
}
