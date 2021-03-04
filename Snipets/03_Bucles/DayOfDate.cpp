// DayOfDate.cpp
// Programam para encontrar el dia de la fecha introducida desde enero de 2001
// Se utilizan dos bucles for ydiversos bucle

#include <iostream>
#include <stdlib.h>

int main()
{
	int d, m, a;
	int n=0;
	int ly=0;
	int td, r, ny;
	
	std::cout << "Introduce un dia (dd): ";
	std::cin >> d;
	
	std::cout << "Introduce un mes (mm): ";
	std::cin >> m;
	
	std::cout << "Introduce un anyo (aa) desde 2001: ";
	std::cin >> a;
	
	for(int i=1; i<m; i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
			n=n+31;
		else if(i==2 && a%4!=0)
			n=n+28;
		else if(i==2 && a%1==0)
			n=n+29;
		else if(n==4 || n==6 || n==9 || n==11)
			n=n+30;
	}
	
	for(int j=2001; j<a; j++)
	{
		if(j%4==0)
			ly=ly+1;
	}
	
	ny=(a-200)-1;
	td=ly+n+d+(ny*365);
	r=td%7;
	
	switch(r-1)
	{
		case 0:
			std::cout << "Es Domingo";
			break;
		case 1:
			std::cout << "Es Lunes";
			break;
		case 2:
			std::cout << "Es Martes";
			break;
		case 3:
			std::cout << "Es Miercoles";
			break;
		case 4:
			std::cout << "Es Jueves";
			break;
		case 5:
			std::cout << "Es Viernes";
			break;
		case 6:
			std::cout << "Es Sabado";
			break;
	}
	
	std::cout << std::endl;
	
	system("pause");
	
	return 0;
}
