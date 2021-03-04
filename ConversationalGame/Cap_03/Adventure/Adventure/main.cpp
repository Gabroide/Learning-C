#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "mirar alrededor";
static bool getInput(void)
{
	printf("\n$ ");
	return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
	printf("Bienvenido a nuestra aventura\n");

	while (parseAndExecute(input) && getInput());
	
	printf("\n¡Adios!\n");
	return 0;
}