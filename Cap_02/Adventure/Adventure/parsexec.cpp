#include <stdio.h>
#include <stdbool.h>
#include <string.h>
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
			printf("Todo esta muy oscuro aqui...\n");
		}
		else if (strcmp(verb, "ir") == 0)
		{
			printf("Esta muy oscuro para ir a cualquier lugar.\n");
		}
		else
		{
			printf("No se como '%s'.\n", verb);
		}
	}
	return true;
}