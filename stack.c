#include<stdio.h>
#include<stdlib.h>
#define MAX 90
int stack[MAX];
int top = -1;

void push(int value) {
    if(top == MAX - 1){
        printf("stack overflow! cannot push%d\n", value);
    } else { 
    top++;
    stack [top] = value;
    printf("%d pushed to stack\n");
    }
}
void pop(){
    if (top == -1){
        printf("stack undrflow!cannot pop:\n");
    }else{
        printf("%d popped from stack:\n", stack[top]);
        top--;
    }
}
void peek(){
    if (top == -1){
        printf("stack is empty:\n");
    } else {   
        printf("stack is emopty:\n", stack[top]);                                                   
    }
}
void display() {
    if (top == -1) {
        printf("stack is empty\n");
    } else {
        for (int i = top; i>0; i--){
        printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int choice, value;
    while(1){
        printf("\n-- Stack Menuu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("enter value to push:");
            scanf("%d", value);
            push(value);
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("invalid choice\n");
    }
}
return 0;
}