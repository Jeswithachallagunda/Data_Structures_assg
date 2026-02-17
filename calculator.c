#include <stdio.h>
#include <ctype.h>
#define MAX 100

int stack[MAX];
int top = -1;
void push(int x) {
stack[++top] = x;
}
int pop() {
    return stack[top--];
}
int main() {
    char postfix[MAX];
    int i, a, b, result;
    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);
    for (i = 0; postfix[i] != '\0'; i++) {
    if (isdigit(postfix[i])) {
            push(postfix[i] - '0');
        }
        else {
            b = pop();
            a = pop();

            switch (postfix[i]) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }
    result = pop();
    printf("Result: %d", result);

    return 0;
}
