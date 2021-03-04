// Puzzle.cpp
// Puzzle donde deben ordenarse los numeros en pantalla

#include <iostream>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int column, int line);

int main()
{
	char a[17]={' ','c', 'a', '9', '1', '2', '7', 'b', '4', 'e', '5', 'd', '8', 'f', '3', '6'};
	int temp;
	
	char ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;
	char cho=15;
	a[16]=255;
	ch=179;
	ch1=196;
	ch2=197;
	ch3=194;
	ch4=193;
	ch5=218;
	ch6=191;
	ch7=192;
	ch8=217;
	ch9=195;
	ch10=180;
	
	gotoxy(2,1);
	std::cout << ch5;
	gotoxy(30,1);
	std::cout << ch6;
	gotoxy(2,9);
	std::cout << ch7;
	gotoxy(30,9);
	std::cout << ch8;
	
	for(int i=2; i<=30; i++)
		for(int j=2; j<=8; j++)
		{
			gotoxy(i,j);
			std::cout << ch;
		}
	
	for(int i=1; i<=2; i+=1)
		for(int j=1;  i<=9; j+=2)
		{
			gotoxy(i+2, j);
			std::cout << ch1;
		}
	
	for(int i=2; i<=21; i+=7)
		for(int j=1; j<=7; j+=2)
		{
			gotoxy(i+7, j+2);
			std::cout << ch2;
		}
		
	for(int i=2; i<=22; i+=7)
	{
		gotoxy(i+7, 1);
		std::cout << ch3;
	}
	
	for(int i=2; i<=22; i+=7)
	{
		gotoxy(i+7, 9);
		std::cout << ch4;
	}
	
	for(int i=2; i<=7; i+=2)
	{
		gotoxy(2, i+1);
		std::cout << ch9;
	}
	
	for(int i=2; i<=7; i+=2)
	{
		gotoxy(30, i+1);
		std::cout << ch10;
	}
	
	gotoxy(20,14);
	std::cout << "Ordena los numeros exadecimales de forma ascendente" << std::endl;
	gotoxy(35,17);
	std::cout << "CONTROLADOR" << std::endl;
	gotoxy(20,19);
	std::cout << "Presiona las flecha derecha para moverte a la siguiente caja en la fila" << std::endl;
	gotoxy(20,20);
	std::cout << "Presiona la flecha izquierda para moverte a la caja aterior en la fila" << std::endl;
	gotoxy(20,21);
	std::cout << "Presiona la flecha arriba para moverte a la siguiente caja en la columna" << std::endl;
	gotoxy(20,22);
	std::cout << "Presiona la flecha abajo para moverte a la anterior caja en la columna" << std::endl;
	gotoxy(20,24);
	std::cout << "Presiona S para salir" << std::endl;
	
	int p=1;
	for(int i=1; i<=28; i+=7)
	{
		gotoxy(5+i, 2);
		std::cout << a[p];
		p++;
	}
	
	for(int i=1; i<=28; i+=7)
	{
		gotoxy(5+i,4);
		std::cout << a[p];
		p++;
	}
	
	for(int i=1; i<=28; i+=7)
	{
		gotoxy(5+i,6);
		std::cout << a[p];
		p++;
	}
	
	for(int i=1; i<=21; i+=7)
	{
		gotoxy(5+i,8);
		std::cout << a[p];
		p++;
	}
	
	int i=27;
	int j=8;
	
	while(cho!=101)
	{
		if(cho=='M')
			i=i+0;
		else
		{
			i=i+7;
			temp=a[p];
			a[p]=a[p+1];
			
			gotoxy(i,j);
			std::cout << a[p];
			
			p++;
		}
	}
	
	gotoxy(i,j);
	
	if(cho=='K')
	{
		if(i<7)
			i=i-0;
		else
		{
			i=i-7;
			temp=a[p];
			a[p]=a[p-1];
			a[p-1]=temp;
			
			gotoxy(i+7,1);
			std::cout << a[p];
			
			gotoxy(i,j);
			std::cout << a[p-1];
			p--;
		}
	}
	
	if(cho=='H')
	{
		if(j<3)
			i=j-0;
		else
		{
			j=j-2;
			temp=a[p];
			a[p]=a[p-4];
			a[p-4]=temp;
			
			gotoxy(i,j+2);
			std::cout << a[p-4];
			
			p-=4;
		}
	}
	
	if(cho=='P')
	{
		if(j>6)
			j=j+0;
		else
		{
			j=j+2;
			temp=a[p];
			a[p]=a[p+4];
			a[p+4]=temp;
			
			gotoxy(i,j-2);
			std::cout << a[p];
			
			gotoxy(i,j);
			std::cout << a[p+4];
			
			p+=4;
		}
	}
	return 0;	
}

void gotoxy( int column, int line )
{
	COORD coord;
  	coord.X = column;
  	coord.Y = line;
  	SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ), coord);
}

int wherex()
{
  	CONSOLE_SCREEN_BUFFER_INFO csbi;
  	COORD  result;
  
  	if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE),&csbi))
    	return -1;
  	return result.X;
}

int wherey()
{
  	CONSOLE_SCREEN_BUFFER_INFO csbi;
  	COORD  result;
  
  	if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE), &csbi))
    	return -1;
  	return result.Y;
}
