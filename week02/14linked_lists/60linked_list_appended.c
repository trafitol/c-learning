#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(void)
{
    struct node *head = NULL;

    // Build the list by APPENDING nodes 1, 2, 3, 4, 5 to the end
    // Result should be: 1 → 2 → 3 → 4 → 5
    for (int i = 1; i <= 5; i++) {
        // BLANK 1: Create a new node and check for NULL
        struct node *new_node = malloc(sizeof(struct node)) ;
        if (new_node == NULL) {
            fprintf(stderr, "Allocation failed\n");
            return 1;
        }
        
        // BLANK 2: Set the value and the next pointer
        // (Since we're adding to the end, next should be ???)
        new_node->value = i;
        new_node->next = NULL ;
        
        // BLANK 3: Handle two cases
        if (head == NULL) {
            // Case: list is empty. New node becomes the head.
            head = new_node ;
        } else {
            // Case: list has nodes. Walk to the last one.
            // Start at head, keep advancing while current->next is not NULL.
            struct node *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            // Now current is the last node. Attach new_node to it.
            current->next = new_node ;
        }
    }
    
    // BLANK 4: Traverse and print
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next ;
    }
    printf("\n");
    
    // BLANK 5: Free the entire list
    while (head != NULL ) {
        struct node *tmp = head ;
        head = head->next ;
        free(tmp);
    }
    
    return 0;
}
