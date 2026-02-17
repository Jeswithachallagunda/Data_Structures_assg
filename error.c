#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;
int prec(char ch) {
    if (ch == '+' || ch == '-') return 1;
    if (ch == '*' || ch == '/') return 2;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    int i, j = 0;
    printf("Enter Infix: ");
    scanf("%s", infix);
for (i = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(') {
            stack[++top] = '(';
        }
        else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[j++] = stack[top--];

            if (top == -1) {
                printf("Error: Mismatched Parentheses");
                return 0;
            }
            top--; 
        }
        else {
            while (top != -1 && prec(stack[top]) >= prec(infix[i]))
                postfix[j++] = stack[top--];

            stack[++top] = infix[i];
        }
    }
    while (top != -1) {
        if (stack[top] == '(') {
            printf("Error: Mismatched Parentheses");
            return 0;
        }
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    printf("Postfix: %s", postfix);

    return 0;
}

