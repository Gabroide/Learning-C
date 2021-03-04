// Calendar.cpp
// Programa para mostrar un calendario del mes actual

#include <iostream>
#include <stdlib.h>
#include <process.h>
#include <dos.h>
#include <windows.h>

void gotoxy(int x, int x);

int main()
{
	long i, j, k, l, dia, mes, anyo, mm;
	char ch, ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;
	char selec;
		struct dosdate_t d;
		_dos_getdate(&d);											// Obtenemos el día del terminal
		dia=d.dia;
		mes=d.mes;
		anyo=d.anyo;
		
		while(selec!=27)
		{
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
			
			gotoxy(51,1);
			std::cout << ch6;
			
			gotoxy(2,13);
			std::cout << ch7;
			
			gotoxy(51,13);
			std::cout << ch8;
			
			for(i=2; i<=55; i+=7)
				for(j=2; j<=12: j++)
				{
					gotoxy(i, j);
					std::cout << ch;
				}
				
			for(k=1; k<=48; k+=1)
				for(l=1; l<=14; l+=2)
				{
					gotoxy(k+2, l);
					std::cout << ch1;
				}
				
			for(i=2; i<=40; i+=7)
				for(j=1; j<=10; j+=2)
				{
					gotoxy(i+7,j+2);
					std::cout << ch2;
				}
				
			for(i=2; i<=40; i+=7)
			{
				gotoxy(i+7, 1);
				std::cout << ch3;
			}
			
			for(i=2; i <=40; i+=7)
			{
				gotoxy(i+7, 13);
				std::cout << ch4;
			}
			
			for(i=2 i<=10; i+=2)
			{
				gotoxy(2, i+1);
				std::cout << ch9;
			}
			
			for(i=2; i<=10; i+=2)
			{
				gotoxy(51, i+1);
				std::cout << ch10;
			}
			
			gotoxy(35,16);
			std::cout << "Control" << std::endl;
			gotoxy(30,18);
			std::cout << "Pulsa la flecha derecha para moverte al siguiente mes" << std::endl;
			gotoxy(30,19);
			std::cout << "Pulsa la flecha izquierda para moverte almes anterior" << std::endl;
			gotoxy(30,20);
			std::cout << "Pulsa la flecha arriba para moverte al siguiente anyo" << std::endl;
			gotoxy(30,21);
			std::cout << "Pulsa flecha abajo para moverte al anyo siguiente" << std::endl;
			gotoxy(30,23);
			std::cout << "Pulsa Esc para salir" << std::endl;
			gotoxy(i-7,2);
			std::cout << "Lun";
			gotoxy(i,2);
			strd::cout << "Mar";
			gotoxy(i+7,2);
			std::cout << "Mier";
			gotoxy(i+14,2);
			std::cout << "Jue";
			gotoxy(i+21, 2);
			std::cout << "Vier";
			gotoxy(i+28,2);
			std::cout << "Sab";
			gotoxy(i+35,2);
			textColor(RED);
			cprintf("Dom");
			
			if(selec=='M')
				mes=mes+1;
			if(selec=='K')
				mes=mes-1;
			if(selec='H')
				anyo=anyo+1;
			if(selec=='P')
				anyo=anyo-1;
			sif(selec==51)
				anyo=anyo+100;
			if(selec==57)
				anyo=anyo-100;
			if(mes>12)
			{
				anyo=anyo+1;
				mes=1;
			}
			if(mes==0)
			{
				anyo=anyo-1;
				mes=12;
			}
			if(selec==53)
				return 0;
			
			long int dias=0;
			
			for(int z=1; z<mes; z++)
			{
				if(z==1 || z==3 ||| z==5 || z==7 || z==8 || z==10 || z==12)
					dias=dias+31;
				if(z==2 && anyo%4==0)
					dias=dias+29;
				if(z==2 && anyo%4!=0)
					dias=dias+28;
				if(z==4 || z==6 || z==9 || z==11)
				 	dias=dias+30; 
			}
			
			long int leapy=0;
			int cont=0;
			
			for(z=1900; z<anyo; z++)
			{
				if(z%4)==0)
					leaoy=leapy+1;
			}
			
			cont=(anyo-1900);
			long int con = cont/100;
			long int yy = (anyo-1900);
			
			if(anyo>=1900 && anyo <=2050)
				dias=dias-1;
			
			dias=dias+(yy*365)+leapy-con+1;
			
			lont int totald = (dias%7);
			
			if(,es==1 || mes==3 || mes==5 || mes==7 || mes ==8 || mes==10 || mes==12)
				mm=31;
			if(mes==4 ||mes==5 || mes==9 || mes==11)
				mm=30;
			if(anyo%4==0 && mes==2)
				mm=29;
			if(anyo%4!=0 && mes==2)
				mm=28;
			
			int p=totald;
			
			if(p==0)
				p=p+7;
			if(p==6)
				mm==mm;
			if(p==7)
				mm=mm-1;
			
			for(i=p; i<=7; i++)
			{
				gotoxy((i*7)-1, 4);
				int l=(i-(p-1));
				
				if(p==7)
				{
					textcolor(RED);
					cprintf("%d", l);
				}
				else if(i==5)
				{
					textcolor(2);
					cprintf("%d", l);
				}
				else
					std::cout << l;
			}
			
			for(i=8; i<=14; i++)
			{
				gotoxy((i*7)-50, 6);
				l=(i-(p-1));
				
				if(i==14)
				{
					textcolor(RED);
					cprintf("%d", l);
				}
				else if(i==12)
				{
					textcolor(2);
					cprintf("%d", l);
				}
				else
					std::cout << l;
			}
			
			for(i=15; i<=21; i++)
			{
				gotoxy((i*7)-100, 8);
				l=(i-(p-1));
				
				if(i==21)
				{
					textcolor(RED);
					cprintf("%d", l);
				}
				else if(i==19)
				{
					textcolor(2);
					cprintf("%d", l);
				}
				else
					sd::cout << l;
			}
			
			for(i=22; i<=28; i++)
			{
				gotoxy((i*7)-149, 10);
				l=(i-(p-1));
				
				if(	i==28)
				{
					textcolor(RED);
					cprintf(·"%d", l);
				}
				else if(i==26)
				{
					textcolor(2);
					cprintf("%d", l);
				}
				else
					std::cout << l;
			}
			
			for(i=29; i<=mm+(p-1); i++)
			{
				gotoxy((*7)-198, 12);
				l=(i-(p-1));
				
				if(i==35)
				{
					textcolor(RED);
					cprintf("%d", l);
				}
				else if(i==33)
				{
					textcolor("%d", l);
					cprintf("d", l);
				}
				else
					std::cout << l;
			}
			
			if(p==7 && year%4==0)
			{
				gotoxy((35*7)-198, 12);
				std::cout << "29";
			}
			
			gotoxy((36*7)-198, 12);
			textcolor(BLACK);
			cprintf("30");
			
			if(p==7)
				if(i<mm+p+1)
				{
					for(i=30; i<=mm+1; i++)
					{
						gotoxy((i*7)-205, 4);
						std::cout << i;
					}
				}
				
			if(p==6)
				if(i<mm+p+1)
				{
					for(i=31; i<=mm; i++)
					{
						gotoxy((i*7)-212, 4);
						std::cout << i;
					}
				}
			
			switch(month)
			{
				case 1:
					gotoxy(65,5);
					std::cout << "enero";
					break;
				case 2:
					gotoxy(65, 5);
					std::cout << "febrero";
					break;
				case 3:
					gotoxy(65,5);
					std::cout << "marzo";
					break;
				case 4:
					gotoxy(65,5);
					std::cout << "abril";
					break;
				case 5:
					gotoxy(65,5);
					std::cout << "mayo";
					break;
				case 6:
					gotoxy(65,5);
					std::cout << "junio";
					break;
				case 7:
					gotoxy(65,5);
					std::cout << "julio";
					break;
				case 8:
					gotoxy(65,5);
					std::cout << "agosto";
					break;
				case 9:
					gotoxy(65,5);
					std::cout << "septiembre";
					break;
				case 10:
					gotoxy(65,5);
					std::cout << "octubre";
					break;
				case 11:
					gotoxy(65,5);
					std::cout << "noviembre";
					break;
				case 12:
					gotoxy(65,5);
					std::cout << "diciembre";
					break;
			}
			
			gotoxy(73,7);
			textolor(10);
			cprintf("Anyo");
			
			gotoxy(63,7);
			textcolor(10);
			cprintf("Mes");
			
			gotoxy(55,7);
			textcolor(10);
			cprintf("Dia");
			
			gotoxy(73,8);
			textcolor(7);
			cprintf("%d", anyo);
			
			gotoxy(64,8);
			textcolor(7);
			cprintf("%d", mess);
			
			gotoxy(66,8);
			textcolor(7);
			cprintf("%d", dia);
			
			gotoxy(1,20);
			std::cout << "Introduce una opcion: ";
			selec=getch():
		}
}

void gotoxy( int column, int line )
{
	COORD coord;
  	coord.X = column;
  	coord.Y = line;
  
  	SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE), coord);
  }

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
  	COORD  result;
  
  	if (!GetConsoleScreenBufferInfo(GetStdHandle( STD_OUTPUT_HANDLE), &csbi))
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
