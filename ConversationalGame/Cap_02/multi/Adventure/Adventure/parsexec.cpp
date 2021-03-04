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
		if (strcmp(verb, "quit") == 0)
		{
			return false;
		}
		else if (strcmp(verb, "look") == 0)
		{
			printf("Everything is very dark here...\n");
		}
		else if (strcmp(verb, "go") == 0)
		{
			printf("Everything is very dark everywhere.\n");
		}
		else
		{
			printf("I do not know how '%s'.\n", verb);
		}
	}
	return true;
}