// Friend.cpp
// Programa para mostrar el mensaje con una clase amiga

#include <iostream>
#include <stdlib.h>

class uno
{
	private:
		int i;
		
	public:
		uno()
		{
			i=10;
		}
		
		friend class dos;
};

class dos
{
	public:
		fun(uno a)
		{
			std::cout << a.i << std::endl;
		}
};

int main()
{
	uno a;
	dos b;
	
	b.fun(a);
	
	system("pause");
	
	return 0;
}
