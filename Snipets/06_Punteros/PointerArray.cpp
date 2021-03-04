// PointerArray.cpp
// Programam para imprimir el valor del puntero de un array de caracteres

#include <iostream>
#include <stdlib.h>

int main()
{
	char *a[5]={"Manzana", "Platano", "Naranja", "Coco", "Melon"};
	
	std::cout << a[0] << std::endl;
	std::cout << a[1] << std::endl;
	std::cout << a[2] << std::endl;
	std::cout << a[3] << std::endl;
	std::cout << a[4] << std::endl;
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
