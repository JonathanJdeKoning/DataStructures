#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


	char last[10] = "de Koning";

	printf("First String: %s\n", last);
	
	int i;
	for (i = 0; i < 9; i++) {
		last[i] = tolower(last[i]);
	}

	printf("Second String: %s\n", last);
}
