#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *newnode, *head, *tail;

void display(void); // Function prototype declaration

int main() {
    int i, n;
    printf("Enter how many nodes you want to create: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newnode->data);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            newnode->next = NULL;
            tail = newnode;
        }
    }
    display(); // Call the display function after creating the linked list
    return 0;
}

void display(void) { // Function definition
    struct node *p = head;
    printf("Linked List: ");
    while (p != NULL) {
        printf("%d->%u  ", p->data, p->next);
        p = p->next;
    }
    printf("\n");
}
