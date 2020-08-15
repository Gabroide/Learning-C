#include <stdio.h>
#include <string.h>
struct location {
	const char *description;
	const char *tag;
}
locs[] = {
   {"un campo abierto", "campo"},
   {"una cueva", "cueva"}
};
#define numberOfLocations   (sizeof locs / sizeof *locs)
static unsigned locationOfPlayer = 0;
void executeLook(const char *noun)
{
	if (noun != NULL && strcmp(noun, "alrededor") == 0)
	{
		printf("Estas en %s.\n", locs[locationOfPlayer].description);
	}
	else
	{
		printf("No entiendo que quieres ver.\n");
	}
}
void executeGo(const char *noun)
{
	unsigned i;
	for (i = 0; i < numberOfLocations; i++)
	{
		if (noun != NULL && strcmp(noun, locs[i].tag) == 0)
		{
			if (i == locationOfPlayer)
			{
				printf("No puedo acercarme mas.\n");
			}
			else
			{
				printf("Vale.\n");
				locationOfPlayer = i;
				executeLook("alrededor");
			}
			return;
		}
	}
	printf("No entiendo a donde quieres ir.\n");
}