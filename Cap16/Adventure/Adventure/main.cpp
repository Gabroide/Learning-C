#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "parsexec.h"
static char input[100] = "look around";
static bool getFromFP(FILE *fp)
{
	bool ok = fgets(input, sizeof input, fp) != NULL;
	if (ok) input[strcspn(input, "\n")] = '\0';
	return ok;
}
static bool getInput(const char *filename)
{
	static FILE *fp = NULL;
	bool ok;
	if (fp == NULL)
	{
		if (filename != NULL) fp = fopen(filename, "rt");
		if (fp == NULL) fp = stdin;
	}
	else if (fp == stdin && filename != NULL)
	{
		FILE *out = fopen(filename, "at");
		if (out != NULL)
		{
			fprintf(out, "%s\n", input);
			fclose(out);
		}
	}
	printf("\n--> ");
	ok = getFromFP(fp);
	if (fp != stdin)
	{
		if (ok)
		{
			printf("%s\n", input);
		}
		else
		{
			fclose(fp);
			ok = getFromFP(fp = stdin);
		}
	}
	return ok;
}
int main(int argc, char *argv[])
{
	(void)argc;
	printf("Welcome to Little Cave Adventure.\n");
	while (parseAndExecute(input) && getInput(argv[1]));
	printf("\nBye!\n");
	return 0;
}