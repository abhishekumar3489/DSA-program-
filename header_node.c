#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *header, *n1, *n2, *temp;

    // Create header node
    header = malloc(sizeof(struct Node));
    header->next = NULL;

    // Create first node
    n1 = malloc(sizeof(struct Node));
    n1->data = 10;
    n1->next = NULL;

    // Create second node
    n2 = malloc(sizeof(struct Node));
    n2->data = 20;
    n2->next = NULL;

    // Link nodes
    header->next = n1;
    n1->next = n2;

    // Print linked list
    temp = header->next;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    free(n2);
    free(n1);
    free(header);

    return 0;
}
