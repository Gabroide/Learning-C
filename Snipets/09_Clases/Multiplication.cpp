// Multiplication.cpp
// Programa para calcular la multuplicación de dos número mediante clases y sin utilitzar *

#include <iostream>
#include <stdlib.h>

class myclass
{
	private:
		int a, b, res;
		
	public:
		void input()
		{
			std::cout << "Introduce un valor para a: ";
			std::cin >> a;
			
			std::cout << "Introduce un valor para b: ";
			std::cin >> b;
		}
		
		void mult()
		{
			res = 0;
			
			for(int i=1; i<=b; i++)
				res=res+a;
			
			std::cout << "La multiplicacion de los dos valores es: " << res << std::endl;
		}
};

int main()
{
	myclass c1;
	
	c1.input();
	c1.mult();
	
	system("pause");
	
	return 0;
}
