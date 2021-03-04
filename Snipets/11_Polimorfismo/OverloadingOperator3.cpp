// OverloadingOperator3.cpp
// Programam para sobrecargar operadores binarios

#include <iostream>
#include <stdlib.h>

class Peso
{
	private:
		int kg, g, mg;
	
	public:
		Peso()
		{
			kg=0;
			g=0;
			mg=0;
		}

		Peso(int a, int b, int c)
		{
			kg=a;
			g=b;
			mg=c;
		}
	
		EntradaDatos()
		{
			std::cout << "Introduce los kg: ";
			std::cin >> kg;
		
			std::cout << "Introduce los g; ";
			std::cin >> g;
		
			std::cout << "Introduce los mg: ";
			std::cin >> mg;
		}
	
		MostrarDatos()
		{
			std::cout << "El peso es: " << kg << " " << g << " " << mg << std::endl;
		}
	
		Peso operator +(Peso p5)
		{
			int i=kg+p5.kg;
			int j=g+p5.g;
			int k=mg+p5.mg;
			
			return Peso(i,j,k);
		}
	
		Peso operator -(Peso p5)
		{
			int i=kg-p5.kg;
			int j=g-p5.g;
			int k=mg-p5.mg;
			
			return Peso(i,j,k);
		}
	
		Peso operator *(Peso p5)
		{
			int i=kg*p5.kg;
			int j=g*p5.g;
			int k=mg*p5.mg;
			
			return Peso(i,j,k);
		}
};

int main()
{
	Peso p1, p3, p4, p6;
	p1.EntradaDatos();
	Peso p2(15,100,150);
	p3=p1+p2;
	p4=p1-p2;
	p6=p2*p1;
	
	p3.MostrarDatos();
	p4.MostrarDatos();
	p6.MostrarDatos();
	
	system("pause");
	
	return 0;
}
