// AlphabeticDesign.cpp
// Programa para mostrar un diseño alfabético en pantalla

#include <iostream>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int line );

int main()
{
	int n;
	char ch;
	
	std::cout << "Introduce un numero entre 1 y19 que se quiera mostrar en el alfabeto: ";
	std::cin >> n;
	
	for(int i=65; i<=65+n; i++)
		for(int j=1; j<=65+n-1; j++)
		{
			ch=i;
			gotoxy(i-64+i-64, j+5);
			
			std::cout << ch << std::endl;
		}
		
	for(int i=65; i>=65; i--)
		for(int j=i; j<=65; j++)
		{
			ch=i;
			gotoxy(65+n-i+65+n-i+(n+n-2), 72-j+(n-2));
			
			std::cout << ch << std::endl;
		}
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

