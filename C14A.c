#include <stdio.h>
#include <stdlib.h>


int main() {
   	printf("Summer 2024 – CS2124 A1T, bzw879\n\n");
	
	//Variable with the value 42
	int x = 42;

	//Variable with the address of x
	int * xPtr = &x;

	//printing our pointer shows that it stores an address.
	printf("%p \n", xPtr);

	//When print the data stored at the pointer's address, we get whatever is stored in x
	printf("%d \n", *xPtr);

}
