#include <stdio.h>
#include <stdlib.h>

int main() {
   	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");


    int numElems;
    printf("Enter number of elements (calloc): ");
    scanf("%d", &numElems);
    
    int *ptr = calloc(numElems, sizeof(*ptr));
    
    printf("Enter Elements\n");
    
    int i;
    for (i = 0; i < numElems; i++) {
        scanf("%d", ptr+i);
    }
    
    for (i = 0; i < numElems; i++) {
        printf("Memory Address of %d is %p\n", *(ptr + i),&ptr[i]);
    }

    free(ptr);
}

