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
	printf("Welcome to our adventure!\n");

	while (parseAndExecute(input) && getInput());
	
	printf("\nBye!\n");
	return 0;
}