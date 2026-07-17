#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void)
{
    struct node *head = NULL;   // start with an empty list

    // Build the list by prepending nodes 5, 4, 3, 2, 1
    // Prepending in reverse gives us 1 → 2 → 3 → 4 → 5 in traversal order
    for (int i = 5; i >= 1; i--) {
        struct node *new_node = malloc(sizeof(struct node));
        if (new_node == NULL) {
            fprintf(stderr, "Allocation failed\n");
            return 1;
        }
        new_node->value = i;
        new_node->next = head;    // new node points to current head
        head = new_node;           // new node becomes head
    }

    // Traverse: walk from head, print each value
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    // Free: walk from head, free each node
    while (head != NULL) {
        struct node *tmp = head;   // save reference to current node
        head = head->next;          // advance head to next node
        free(tmp);                  // free the saved node
    }

    return 0;
}
