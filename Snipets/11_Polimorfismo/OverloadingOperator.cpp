// OverloadingOperator.cpp
// 	Programa para sobrevargar el operador binario +

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
		
		void dis()
		{
			std::cout << pies << "\t" << pulgadas << std::endl;
		}
		
		distancia operator +(distancia);
};

int main()
{
	distancia dis1, dis3;
	
	dis1.input();
	distancia dis2(	11, 6.5);
	dis3=dis1+dis2;
	
	std::cout << "Distancias" << std::endl;
	dis1.dis();
	dis2.dis();
	dis3.dis();
	
	system("pause");
	
	return 0;
}

distancia distancia::operator +(distancia d2)
{
	distancia temp;
	temp.pies=pies+d2.pies;
	temp.pulgadas=pulgadas+d2.pulgadas;
	
	return temp;
}
