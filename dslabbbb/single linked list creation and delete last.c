#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*tail;

void display();
void deleteLast();


int main()
{  
    int i,n;
    printf("Enter number of nodes you want to create: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data of node %d : ",i+1);
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->next=NULL;
        }
        tail=newnode;
    }
    display();
    deleteLast(); // Deleting the last node
    display();
    return 0;
}

void display()
{
    struct node *p=head;
    printf("\nThe linked list is: ");
    while(p!=NULL)
    {
        printf("%d->%p  ",p->data,p->next);
        p=p->next;
    }
}


void deleteLast()
{
    struct node *current = head;
    struct node *previous = NULL;

    // Traverse to the last node
    while(current->next != NULL)
    {
        previous = current;
        current = current->next;
    }

    // If only one node is present
    if(previous == NULL)
    {
        free(current);
        head = NULL;
    }
    else
    {
        previous->next = NULL;
        free(current);
    }
    printf("\nAfter deleting last node");
}

