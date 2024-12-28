/*WAP demonstrating bubble sort using linked list*/

#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
};

void push(struct Node** head_ref, int new_data){ 
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
	new_node->data = new_data;
	new_node->next = (*head_ref);
    (*head_ref) = new_node; 
} 

void printList(struct Node *node) { 
	while (node!=NULL) 
	{ 
		printf("%d ", node->data); 
		node = node->next; 
	} 
} 

void swap(struct Node *a, struct Node *b) { 
	int temp = a->data; 
	a->data = b->data; 
	b->data = temp; 
}

void bubbleSort(struct Node *start) {
	int swapped, i; 
	struct Node *ptr1; 
	struct Node *lptr = NULL; 

	if (start == NULL) 
		return; 

    do{ 
        swapped = 0; 
        ptr1 = start; 

        while (ptr1->next != lptr){ 
            if (ptr1->data > ptr1->next->data){ 
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
	while (swapped); 
} 

int main(){ 
	struct Node* head = NULL;
	push(&head, 20); 
	push(&head, 13); 
	push(&head, 19); 
	push(&head, 11); 
	push(&head, 12); 

	printf("\nLinked list before sorting:\n"); 
	printList(head); 

	bubbleSort(head); 

	printf("\n\nLinked list after sorting:\n"); 
	printList(head); 

	return 0; 
}