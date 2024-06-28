#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int is_balanced(char* string) {
	int len = strlen(string);
	char stack[len];
	int top = -1;

	int i;
	for(i = 0; i<len;i++) {
		char curr = string[i];
		if (curr=='(' || curr=='{' || curr=='[') {
			stack[++top] = curr;
			continue;
		}

		if (curr==')' && stack[top] != '(')
			return 0;
		if (curr=='}' && stack[top] != '{')
			return 0;
		if (curr==']' && stack[top] != '[')
			return 0;

		if (curr==']' || curr==')' || curr=='}')
			top--;

	}
	return top == -1 ? 1 : 0;
}


int main() {
	printf("Jonathan de Koning - bzw879 - Summer 2024\n");
	char string[10000];

	printf("Enter Expression:\n");
	scanf("%s",string);
	if (is_balanced(string)) {
		printf("It's Balanced (^_^)\n");
	} else {
		printf("It's Not Balanced (0_0)\n");
	}
	
}


