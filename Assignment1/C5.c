#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
  	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


	FILE* filePointer = fopen("jonathan.txt", "r");

    char *buf;
    buf = (char *)malloc(100 * sizeof(char));
    getcwd(buf, 100);
    printf("Location: %s/jonathan.txt\n", buf);

    char fileContents[100];
    fgets(fileContents, 100, filePointer);
    printf("File Contains: %s\n", fileContents);

	printf("Pointer Location: %ld\n", ftell(filePointer));

    free(buf);
    fclose(filePointer);

    return 0;
}

