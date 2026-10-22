#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // creating the first node and linking a second one manually
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 5;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 9;
    head->next->next = NULL;

    printf("%d -> %d -> NULL\n", head->data, head->next->data);
    return 0;
}
 
