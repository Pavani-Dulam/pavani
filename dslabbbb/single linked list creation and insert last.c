#include<stdlib.h>
#include<stdio.h>

struct node {
	int data;
	struct node *next;
};

struct node *head, *ptr;

void insert();
void display(void);


int main() {
	int i, n, c;
	
	// Take input from user
	printf("Enter how many nodes you want: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		struct node *newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data %d: ", i + 1);
		scanf("%d", &newnode->data);
		
		if (head == NULL) {
			head = ptr = newnode;
		} else {
			ptr->next = newnode;
			newnode->next = NULL;
		}
		ptr = newnode;
	}
	
	display();
	insert();
	display();
	
	
	return 0;
}

void display(void) {
	struct node *p = head;
	printf("Linked List: ");
	while (p != NULL) {
		printf("%d->%u  ", p->data,p->next);
		p = p->next;
	}
	printf("\n");
}

void insert() {
	struct node *last, *temp;
	last = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter which element you want to insert: ");
	scanf("%d", &last->data);
	
	// Insert at last
	if (last == NULL) {
		printf("Not possible");
	} else {
		temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = last;
		last->next = NULL;
	}
}


