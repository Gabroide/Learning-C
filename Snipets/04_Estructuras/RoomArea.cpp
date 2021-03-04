// RoomArea.cpp
// Programa para calcular el área de una habitación

#include <iostream>
#include <stdlib.h>

struct distancia
{
	int metros;
	float centimetros;
};

struct habitacion
{
	distancia ancho;
	distancia lon;
};

int main()
{
	float a, l, area;
	habitacion din;
	
	din.ancho.metros=10;
	din.ancho.centimetros=5.5;
	din.lon.metros=12;
	din.lon.centimetros=6.5;
	a=din.ancho.metros+ din.ancho.centimetros/100;
	l=din.lon.metros + din.lon.centimetros/100;
	area=a*l;
	
	std::cout << "El area de la habitacion es: "<< area << "m2" << std::endl;
	
	system("pause");
	
	return 0;
	
	
}
