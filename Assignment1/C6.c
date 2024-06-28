#include <stdio.h>
#include <string.h>

int main() {
	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


	char string1[9] = "Jonathan";
	char string2[9];

	printf("String S1: %s\n", string1);
	
	strcpy(string2, string1);

	printf("String S2: %s\n", string2);

	printf("S2 String Length: %ld\n", strlen(string2));
	



}
