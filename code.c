#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int x) {
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
            temp=temp->next;

        temp->next=newnode;
        newnode->next=head;
    }
}
void deleteLast() {
    struct node *temp=head,*prev;
    while(temp->next!=head)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=head;
    free(temp);
}

void display() {
    struct node *temp=head;
    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}
int main(){
    int n,x,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        create(x);
    }
    deleteLast();
    display();

    return 0;
}