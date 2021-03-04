// MultipleOperations.cpp
// Programa que permite seleccionar una operacion de un menu para despues ejecutarla.
// Para seleccionar los diferentes métodos del menu se utiliza un bucle switch-case

#include <iostream>
#include <stdlib.h>
#include <math.h>																		// Libreria con funciones matematicas

int main()
{
	int i, x, n, p, b, op, res, cont;
	
	std::cout << "Selecciona una de las siguientes opciones" << std::endl;
	std::cout << "1. Factorial" << std::endl;
	std::cout << "2. Par/Impar" << std::endl;
	std::cout << "3. Primo" << std::endl;
	std::cout << "4. Potencia" << std::endl;
	std::cout << "5. Raiz cuadrada" << std::endl;
	std::cout << "Opcion: ";
	std::cin >> op;
	
	res = 1;
	cont = 0;
	
	switch(op)
	{
		case 1:
			std::cout << "Introduce un numero: ";
			std::cin >> n;
			
			for(i=1; i <=n; i++)															// Bucle foor para recorrer todo el factorial
				res = res * i;
			
			std::cout << "El factorial del numero introducido es: " << res << std::endl;
			
			break;
		case 2:
			std::cout << "Introduce un numero: ";
			std::cin >> n;
			
			if(n%2==0)
				std::cout << "El numero introducido es par" << std::endl;
			else
				std::cout << "El numero introducido es impar" << std::endl;
				
			break;
			
		case 3:
			std::cout << "Introduce un numero: ";
			std::cin >> n;
			
			for(i=1; i<=n; i++)
				if(n%i==0)
					cont = cont + 1;
			if(cont==2)
				std::cout << "El numero es primo" << std::endl;
			else
				std::cout << "El numero no es primo" << std::endl;
			
			break;
			
		case 4:
			std::cout << "Introduce la base de la potencia: ";
			std::cin >> b;
			
			std::cout << "Introduce la mentisa de la potencia: ";
			std::cin >> p;
			
			for(i=1; i<=p; i++)														// Si no se quiere utilizar un bucle for, puede utilizarse la siguiente funcion: pow(b,p)
				res = res * b;
			
			std::cout << "Elevar el numero " << b << " a la potencia " << p << "da: " << res << std::endl;	
			
			break;
			
		case 5:
			std::cout << "Introduce un numero: ";
			std::cin >> n;
				
			double resul = sqrt(n);																									// Se declara la variable res como double de forma local para no perder precision
			std::cout << "La raiz cuadrada del numero es: " << resul << std::endl;
				
			break;		
	}
	
	system("pause");
	
	return 0;
}
