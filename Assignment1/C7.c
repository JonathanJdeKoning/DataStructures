#include <stdio.h>
#include <string.h>

int main() {
	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


	char concat[100];
	char str1[9] = "Jonathan";
	char str2[7] = "Joseph";

	printf("First String: %s\n", str1);
	printf("Second String: %s\n", str2);
	
	strcat(concat, str1);
	strcat(concat, str2);

	printf("Concatenated String: %s\n", concat);


}
