// VirtualFunction2.cpp
// Programa para mostrar un mensaje utilizando una función virtual

#include <iostream>
#include <stdlib.h>

class donquijote
{
	public:
		virtual lugar()
		{
			std::cout << "En un lugar de la Mancha" << std::endl;
		}
		
		virtual nombre()
		{
			std::cout << "de cuyo nombre no puedo acordarme" << std::endl;
		}
		
		void vivia()
		{
			std::cout << "vivia un viejo hidalgo" << std::endl;
		}
};

class donquijote2: public donquijote
{
	public:
		lugar()
		{
			std::cout << "En un lufar de la Mancha 2" << std::endl;
		}
		
		nombre()
		{
			std::cout << "de cuyo nombre no puedo acordarme 2" << std::endl;
		}
};

class donquijote3: public donquijote
{
	public:
		lugar()
		{
			std::cout << "En un lugar de la Mancha 3" << std::endl;
		}
		
		nombre()
		{
			std::cout << "de cuyo nombre no puedo acordarme 3" << std::endl;
		}
		
		vivia()
		{
			std::cout << "vivi un viejo hidalgo 3" << std::endl;
		}
};

class donquijote4: public donquijote
{
	public: 
		lugar()
		{
			std::cout << "En un lugar de la Mancha 4" << std::endl;
		}
	
		nombre()
		{
			std::cout << "de cuyo nombre no quiero acordarme 4" << std::endl;
		}
};

int main()
{
	donquijote *ptr1;
	donquijote dq;
	ptr1=&dq;
	ptr1->lugar();
	ptr1->nombre();
	ptr1->vivia();
	
	donquijote *ptr2, *ptr3, *ptr4;
	donquijote2 ropa;
	donquijote3 deporte;
	donquijote4 verso;
	
	ptr2=&ropa;
	ptr3=&deporte;
	ptr4=&verso;
	
	ptr2->lugar();
	ptr2->nombre();
	ptr3->lugar();
	ptr3->nombre();
	ptr4->lugar();
	ptr4->nombre();
	ptr2->vivia();
	ptr3->vivia();
	
	system("pause");
	
	return 0;
}
