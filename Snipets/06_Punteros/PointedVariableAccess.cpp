// PointedVariableAccess.cpp
// Programam para acceder a la variable del pubtero

#include<iostream>
#include <stdlib.h>

int main()
{
	int *p;
	int a=5;
	
	p=&a;
	
	std::cout << "El valor de a es: " << *p << std::endl;
	
	system("pause");
	
	return 0;
}
