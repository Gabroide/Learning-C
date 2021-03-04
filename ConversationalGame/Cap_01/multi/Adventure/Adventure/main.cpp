#include <stdio.h>
#include <iostream>

int main()
{
	const char *welcome[2] = { "Welcome to our adventure\n", "¡Bienvenido a nuestra aventura!\n" };
	const char *msg[2] = {"Everuthing is very darl here...", "Todo está muy pscuro aquí...\n" };
	const char * bye[2] = { "\nBye!", "\n¡Adiós!\n" };
	int a = 0;

	while (a == 0) {
		printf("Select a language:\n");
		printf("[1] English");
		printf("[2] Castellano");
		scanf("%i", &a);

		if (a < 1 || a > 2)
			printf("The option selected is not correct.\n\n");
		else {
			printf(welcome[a]);
			printf(msg[a]);
			printf(bye[a]);
		}
	}

	return 0;
}