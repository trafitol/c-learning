#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int contains(struct node *head, int target)
{
	struct node *current = head;
	while (current != NULL){
	if((*current).value == target) {
	return 1;
	}
	current = (*current).next;
	}
	return 0;
}

int main (void)
{
	struct node *head = NULL;
	for (int i=5; i>=1;i--){
	struct node *new_node=malloc(sizeof(struct node));
	if(new_node == NULL){
	fprintf(stderr,"Allocation failed\n");
	return 1;
	}
	(*new_node).value = i;
	(*new_node).next = head;
	head = new_node;
}

    printf("Contains 3: %d\n", contains(head, 3));      // expect 1
    printf("Contains 5: %d\n", contains(head, 5));      // expect 1
    printf("Contains 1: %d\n", contains(head, 1));      // expect 1
    printf("Contains 99: %d\n", contains(head, 99));    // expect 0
    printf("Contains -1: %d\n", contains(head, -1));    // expect 0
    printf("Contains 3 in empty list: %d\n", contains(NULL, 3));  // expect 0

	while(head != NULL){
	struct node *tmp = head;
	head = (*head).next;
	free(tmp);
	}
	return 0;
}

