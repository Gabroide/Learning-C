// HiddenWord.cpp
// Juego del ahorcado

#include <iostream>
#include <stdlib.h>
#include <conio.h>														// This library contains getch()
#include <windows.h>

void gotoxy( int column, int line);

int main()
{
	char a[10], b[10];
	int n, k, p, no;
	
	std::cout << "Introduce una palabra de un maximo de 10 letras: ";
	std::cin >> a;
	
	system("cls");
	
	k=0;
	
	while(a[k]!='\0')														// La finalización de un array en C està marcado con el símbolo \0
	{
		gotoxy(40+k, 3);
		std::cout << "-";
		k++;
	}
	
	no=k*2;
	
	gotoxy(	70,1);
	std::cout << no;
	
	p=0;
	
	for(int m=1; m<=2; m++)
	{
		int i=0;
		
		while(a[i]!='\0')
		{
			gotoxy(1,1);
			std::cout << "Introduce una letra: ";
			b[i]=getch();
			
			if(b[i]==a[0])
			{
				gotoxy(40,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[1])
			{
				gotoxy(41,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[2])
			{
				gotoxy(42,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[3])
			{
				gotoxy(43,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[4])
			{
				gotoxy(44,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[5])
			{
				gotoxy(45,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[6])
			{
				gotoxy(46,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[7])
			{
				gotoxy(47,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[8])
			{
				gotoxy(48,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			if(b[i]==a[9])
			{
				gotoxy(49,3);
				std::cout << b[i] << std::endl;
				p++;
			}
			
			no--;
			gotoxy(70,1);
			std::cout << no;
			
			i++;
			
			gotoxy(1,1);
		}
	}
	
	system("cls");
	
	std::cout << "La palabra correcta es: " << a << std::endl;
	
	system("pause");
		
	return 0;
	
}

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

int wherex()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.X;
  }

int wherey()
  {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  COORD  result;
  if (!GetConsoleScreenBufferInfo(
         GetStdHandle( STD_OUTPUT_HANDLE ),
         &csbi
         ))
    return -1;
  return result.Y;
  }
