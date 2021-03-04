#include <stdio.h>
#include <stdbool.h>
#include "parsexec.h"

static char input[100] = "Look around";
static bool getInput(void)
{
	printf("\n$ ");
	return fgets(input, sizeof input, stdin) != NULL;
}

int main()
{
	const char *welcome[2] = { "Welcome to our adventure\n", "¡Bienvenido a nuestra aventura!\n" };
	const char * bye[2] = { "\nBye!", "\n¡Adiós!\n" };
	int a = 0;

	printf("Select a language:\n");
	printf("[1] English");
	printf("[2] Castellano");
	scanf("%i", &a);

	printf(welcome[a]);

	while (parseAndExecute(input) && getInput());
	
	printf(bye[a]);
	return 0;
}