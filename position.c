#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;
void create(int x)
{
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
void insertPos(int val,int pos)
{
    struct node *newnode,*temp=head;
    int i;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    for(i=1;i<pos-1;i++)
        temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
}

void display()
{
    struct node *temp=head;

    do
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}
int main(){
    int n,x,i,val,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        create(x);
    }
    scanf("%d",&val);
    scanf("%d",&pos);
    insertPos(val,pos);
    display();

    return 0;
}