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
    printf("\nEnter data for the newly created node: ");
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    printf("Enter the position you want to insert at: ");
    scanf("%d", &position);

    if (position < 0) {
        printf("Invalid position\n");
        free(newnode); // Free allocated memory
        return;
    }

    if (position == 0) { // Insert at the beginning
        newnode->next = head;
        head = newnode;
        return;
    }

    struct node *temp = head;
    int count = 0;
    while (temp != NULL && count < position - 1) {
        temp = temp->next;
        count++;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
