#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};

int count_nodes(struct node *head)
{
	int count = 0;
	struct node *current = head;

	while(current != NULL) {
	count++;
	current = (*current).next;
	}
	return count;
}

int main (void)

{

	struct node *head=NULL;
	for (int i=5; i>=1 ; i--){
	struct node *new_node = malloc(sizeof(struct node));
	if (new_node==NULL){
	fprintf(stderr, "Allocation failed\n");
	return 1;
	}
	(*new_node).value = i;
	(*new_node).next = head;
	head = new_node;
	}

	printf("Count: %d\n", count_nodes(head));

	printf("Empty count: %d\n", count_nodes(NULL));

	while (head != NULL){
	struct node *tmp = head;
	head = (*head).next;
	free(tmp);
	}
	return 0;
}
