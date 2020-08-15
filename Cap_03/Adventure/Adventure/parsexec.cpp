#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "location.h"
bool parseAndExecute(char *input)
{
	char *next = NULL;
	char *verb = strtok_s(input, " \n", &next);
	char *noun = strtok_s(NULL, " \n", &next);
	if (verb != NULL)
	{
		if (strcmp(verb, "salir") == 0)
		{
			return false;
		}
		else if (strcmp(verb, "mirar") == 0)
		{
			executeLook(noun);
		}
		else if (strcmp(verb, "ir") == 0)
		{
			executeGo(noun);
		}
		else
		{
			printf("No se como '%s'.\n", verb);
		}
	}
	return true;
}