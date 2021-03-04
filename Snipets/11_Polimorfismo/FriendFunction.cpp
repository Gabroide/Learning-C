// FriendFunction.cpp
// Programa para multiplicar tres numeros utilizando una función firenc (amiga)

#include <iostream>
#include <stdlib.h>

class y;
class z;
class x
{
	private:
		int data;
		
	public:
		x()
		{
			data=3;
		}
		
		friend int fun(x,y,z);
};

class y
{
	private:
		int data;
		
	public:
		y()
		{
			data=2;
		}
		
		friend int fun(x,y,z);
};

class z
{
	private:
		int data;
		
	public:
		z()
		{
			data=5;
		}
		
		friend int fun(x,y,z);
};

int fun(x a, y b, z c)
{
	return a.data*b.data*c.data;
}

int main()
{
	x a;
	y b;
	z c;
	
	std::cout << "El resultado es: " << fun(a,b,c) << std::endl;
	
	system("pause");
	
	return 0;
}
