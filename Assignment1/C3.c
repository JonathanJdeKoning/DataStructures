
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
 	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


   	printf("Write: 879\n");
    
	FILE* filePointer = fopen("jonathan.txt", "w");
	
	fprintf(filePointer, "879");

    char *buf;
    buf=(char *)malloc(100*sizeof(char));
    getcwd(buf,100);
    printf("Location: %s/jonathan.txt\n",buf);
	fclose(filePointer);
}

