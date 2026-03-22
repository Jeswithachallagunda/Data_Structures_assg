#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;
void insertFront(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = head;
    if(head != NULL)
        head->prev = newnode;

    head = newnode;
}
void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n,x,i;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        insertFront(x);
        printf("Node Inserted\n");
        display();
        printf("\n");
    }

    return 0;
}