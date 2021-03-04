// Argument.cpp
// Programa para mostrar la distancia en pies y pulgadas

#include <iostream>
#include <stdlib.h>

class distancia
{
	private:
		int pies;
		float pulgadas;
		
	public:
		distancia()
		{
			pies=0;
			pulgadas=0.0;
		}
		
		distancia(int p, float pul)
		{
			pies=p;
			pulgadas=pul;
		}
		
		void input()
		{
			std::cout << "Introduce los pies: ";
			std::cin >> pies;
			
			std::cout << "Introduce las pulgadas: ";
			std::cin >> pulgadas;
		}
		
		void show()
		{
			std::cout << pies << "\t" << pulgadas << std::endl;
		}
		
		distancia adis(distancia d2);
};

int main()
{
	distancia dis1, dis3;
	distancia dis2(11, 6.5);
	
	dis1.input();
	dis3=dis1.adis(dis2);
	
	std::cout << "Primera distancia: ";
	dis1.show();
	
	std:: cout << "Segunda distancia: ";
	dis2.show();
	
	std::cout << "Tercera distancia: ";
	dis3.show();
	
	system("pause");
	
	return 0;
}

distancia distancia::adis(distancia d2)
{
	distancia temp;
	temp.pulgadas=pulgadas+d2.pulgadas;
	temp.pies=pies+d2.pies;
	
	return temp;
}
