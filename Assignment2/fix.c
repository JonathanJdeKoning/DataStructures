#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int prio(char operator) {
    if (operator == '/' || operator == '*')
        return 1;
	if (operator == '+' || operator == '-')
		return 0;
	return -1;
}


void inToPost(char* infix) {
    char postfix[1000];
    int postTop = 0;
    int len = strlen(infix);
    char stack[1000];
    int stackTop = -1;
	int i;
    for (i = 0; i < len; i++) {
        char curr = infix[i];

        if (isdigit(curr))
            postfix[postTop++] = curr;

		if (curr == '(')
            stack[++stackTop] = curr;
       
		if (curr == ')') {
            while (stackTop >= 0 && stack[stackTop] != '(') {
                postfix[postTop++] = stack[stackTop--];
            }
            stackTop--;
        }
       
		if (curr=='+' || curr=='-' || curr=='*' || curr=='/') {
            while (stackTop >= 0 && (prio(infix[i]) <= prio(stack[stackTop]))) {
                postfix[postTop++] = stack[stackTop--];
            }
            stack[++stackTop] = curr;
        }
    }

    while (stackTop >= 0) {
        postfix[postTop++] = stack[stackTop--];
    }

    postfix[postTop] = '\0';

	printf("The Postfix expression:\n");
	for (i = 0; i<strlen(postfix); i++) {
		printf(" %c",postfix[i]);
	}
}

int main() {
	printf("Jonathan de Koning, bzw879 <Summer 2024>\n");
	char infix[10000];
	int i;
	printf("Enter the Infix expression: \n");
	scanf("%s",infix);

	inToPost(infix);

	printf("\nEnd of Program\n");
    return 0;
}

