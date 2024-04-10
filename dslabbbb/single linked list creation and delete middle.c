#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}*head,*tail;

void insert();
void display(void);

int main() {
    int i, n;
    printf("Enter how many nodes you want: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data %d: ", i + 1);
        scanf("%d", &newnode->data);
        if (head == NULL) {
            head = newnode;
            tail=newnode;
        } 
        else 
        {
            tail->next=newnode;
            newnode->next=NULL;
            tail=newnode;
        }
    
    }
    display();
    insert();
    display();
    return 0;
}

void display(void) {
    struct node *p = head;
    while (p != NULL) {
        printf("%d->%u  ", p->data,p->next);
        p = p->next;
    }
    printf("\n");
}

void insert() {
    int position;
    printf("Enter the position you want to delete: ");
    scanf("%d", &position);
    struct node *current = head;
    struct node *previous = NULL;


    if (position < 0) {
        printf("Invalid position\n");
        return;
    }

    else if (position == 0) 
    { 
        struct node *temp = head;
        head=temp->next;
        free(temp);
    }
    else
    {
        int count=0;
        // printf(current != NULL && count != position);
        while(current != NULL && count != position)
        {
                previous = current;
                current = current->next;
                count++;
       }
       previous->next=current->next;
    }

        
    }

