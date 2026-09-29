#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node1, *node2, *node3;
    struct Node *temp;
    int key = 20;        // value to search
    int position = 1;
    int found = 0;

    // Create 3 nodes: 10 -> 20 -> 30
    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Search: check every node from the head
    temp = node1;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            found = 1;
            break;
        }
        temp = temp->next;
        position++;
    }

    if (found)
        printf("%d found at position %d\n", key, position);
    else
        printf("%d not found\n", key);

 
    return 0;
}
