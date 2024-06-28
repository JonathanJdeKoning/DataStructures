#include <stdio.h>
#include <string.h>

int main() {
  	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


	char first[9] = "jonathan";
	char last[9]  = "dekoning";

	printf("First String: %s\n", first);
	printf("Second String: %s\n", last);
	printf("Return Value: %d\n", strcmp(first, last));
	printf("------------------------\n");
	printf("First String: %s\n", first);
	printf("Second String: %s\n", first);
	printf("Return Value: %d\n", strcmp(first, first));
}
