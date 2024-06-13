#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");
    int numStrings = 3;
   
	//Allocate memory for array
    char **arrayOfStrings = (char **)malloc(numStrings * sizeof(char *));
    
    //Allocate memory for strings
    arrayOfStrings[0] = (char *)malloc(9 * sizeof(char));
    strcpy(arrayOfStrings[0], "Jonathan");
    
    arrayOfStrings[1] = (char *)malloc(7 * sizeof(char));
    strcpy(arrayOfStrings[1], "Joseph");
    
    arrayOfStrings[2] = (char *)malloc(10 * sizeof(char));
    strcpy(arrayOfStrings[2], "de Koning");
    
	//print strings
	for (int i = 0; i < numStrings; i++) {
        printf("%s\n", arrayOfStrings[i]);
    }

}

