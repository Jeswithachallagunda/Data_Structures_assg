#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev,*next;
};
struct node *head=NULL;
void append(int x)
{
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(head==NULL)
    {
        newnode->prev=NULL;
        head=newnode;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
        newnode->prev=temp;
    }
}
void deleteLast()
{
    struct node *temp=head;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->prev->next=NULL;
    free(temp);
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
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
        append(x);
    }
    deleteLast();
    display();

    return 0;
}