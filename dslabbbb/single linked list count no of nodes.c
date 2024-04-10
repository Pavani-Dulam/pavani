#include<stdlib.h>
#include<stdio.h>

struct node {
	int data;
	struct node *next;
};

struct node *head, *ptr;

void count();
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
	count();
	
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

void count() {
    int count=0;
	struct node  *temp=head;
	while(temp!=NULL){
	    temp=temp->next;
	    count++;
	}
	printf("count %d ",count);
}


