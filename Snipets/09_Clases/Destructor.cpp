// Destructor.cpp
// Programam para mostrar un mensaje con destructor

#include <iostream>
#include <stdlib.h>

class circulo
{
	private:
		int radio;
	public:
		circulo()
		{
			radio=0;
		}
		
		~circulo()					// Destructor
		{
			
		}
		
		circulo(int r)
		{
			radio=r;
		}
		
		dis()
		{
			std::cout << "El radio es: " << radio << std::endl;
		}
};

int main()
{
	int n;
	
	std::cout << "Introduce el radio: ";
	std::cin >> n;
	
	circulo crl(n);
	circulo crl1(crl);
	crl1.dis();
	
	system("pause");
	
	return 0;
}
