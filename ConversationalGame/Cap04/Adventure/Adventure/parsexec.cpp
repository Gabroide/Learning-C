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
		if (strcmp(verb, "quit") == 0)
		{
			return false;
		}
		else if (strcmp(verb, "look") == 0)
		{
			executeLook(noun);
		}
		else if (strcmp(verb, "go") == 0)
		{
			executeGo(noun);
		}
		else
		{
			printf("I don't know how to '%s'.\n", verb);
		}
	}
	return true;
}