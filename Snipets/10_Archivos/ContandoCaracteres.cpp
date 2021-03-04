// ContandoCaracteres.cpp
// Programam para contar caracteres, tab, vocales, etc. de una linea

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>

int main()
{
	int p=0;
	int k=0;
	int l=0;
	int espCont=0;
	int tabCont=0;
	char ch;
	char arr[150];
	char str[]="Si te quieres	cumple tus suenyos entonces levantate";
	
	std::ofstream a("Ejempl.txt");
	
	int m=strlen(str);
	
	for(int j=0; j<m; j++)
	{
		a.put(str[j]);
	}
	
	a.close();
	
	std::ifstream b("Ejempl.txt");
	
	while(b)
	{
		b.get(ch);
		
		if(ch==' ')
			p++;
		
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			k++;
			
		if(ch==' ')
			espCont++;
		
		if(ch=='\t')
			tabCont++;
			
		std::cout << ch;
	}
	
	std::cout << "\nNo de espacios: " << espCont;
	std::cout << "\nNo te caracteres: " << m;
	std::cout << "\nNo de vocales: " << k;
	std::cout << "\nNo de tabulaciones: " << tabCont << std::endl;
	
	system("pause");
	
	return 0;
}
