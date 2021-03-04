// Game.cpp
// Programa para la generación de números aleatorios en circulos y mostrar la suma

#include <iostream>
#include <stdlib.h>

int main()
{
	int k1 = 0, suma1 = 0, p = 0;
	int k2 = 0, suma2 = 0, q = 1;
	int k3 = 0, suma3 = 0, r = 1;
	int k4 = 0, suma4 = 0, s = 1;
	char ch, seleccion = 's';
	
	while(seleccion == 's')												// El bucle while se ejecutara mientras la variable seleccion sea 's'
	{
		std::cout << "presiona w, a, s, d en circulos" << std::endl;
		std::cin >> ch;
		
		switch(ch)
		{
			case 'w':
				if(p == 0)
				{
					k1 = rand() %10;
					suma1 = k1 + suma1;
					
					std::cout << "Has presionado subir" << std::endl;
					std::cout << "El numero aleatorio es: " << k1 << std::endl;
					p++;															// Incrementamos en 1 el valor de n
					q--;															// Disminuimos en 1 el valor de q
				}
				else
					std::cout << "Tecla no valida";
				
				break;
			case 'd':
				if(q == 0)
				{
					k2 = rand()%10;
					suma2 = suma2 + k3;
					std::cout << "Has presionado ir a la derecha" << std::endl;
					std::cout << "El numero aleatorio es: " << k2 << std::endl;
					q++;
					r--;
				}
				else
					std::cout << "Tecla no valida" << std::endl;
				
				break;
				
			case 's':
				if(q==0)
				{
					k3 = rand() % 10;
					suma3 = suma3 + k3;
					std::cout << "Has presionado bajar" << std::endl;
					std::cout << "El numero aleatorio es: " << k3 << std::endl;
					r++;
					s--;
				}
				else
					std::cout << "Tecla no valida" << std::endl;
					
				break;
				
				case 'a':
					if(q==0)
					{
						k4 = rand() % 10;
						suma4 = suma4 + k4;
						std::cout << "Has presionado ir a la izquierda" << std::endl;
						std::cout << "Elnumero aleatorio es: " << k4 << std::endl;
						s++;
						p--;
					}
					else
						std::cout << "Tecla no valida" << std::endl;
						
					break;
					
				default:
					std::cout << "Tecla no valida" << std::endl;
		}
		
		if(suma1>=20)
		{
			system("cls");
			std::cout << "Ir arriba gana" << std::endl;
			system("pause");
			exit(0);
		}
		if(suma2>=20)
		{
			system("cls");
			std::cout << "Ir a la derecha gana" << std::endl;
			system("pause");
			exit(0);
		}
		if(suma3>=20)
		{
			system("cls");
			std::cout << "Ir abajo gana" << std::endl;
			system("pause");
			exit(0);
		}
		if(suma4>=20)
		{
			system("cls");
			std::cout << "Ir a la izquierda gana" << std::endl;
			system("pause");
			exit(0);
		}
		
		std::cout << "uieres continuar (S/N): ";
		std::cin >> seleccion;
		std::cout << std::endl;
	}
}
