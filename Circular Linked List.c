#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *node1, *node2, *node3, *node4, *node5;
    struct Node *head, *temp;

    // Create 5 nodes: 10 -> 20 -> 30 -> 40 -> 50
    node1 = malloc(sizeof(struct Node));
    node2 = malloc(sizeof(struct Node));
    node3 = malloc(sizeof(struct Node));
    node4 = malloc(sizeof(struct Node));
    node5 = malloc(sizeof(struct Node));

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;
    node5->data = 50;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    head = node1;

    // (a) Delete first node (10)
    head = node1->next;     // head moves to the second node
    free(node1);

    // (b) Delete middle node (30)
    node2->next = node4;    // node2 skips node3 and points to node4
    free(node3);

    // (c) Delete last node (50)
    node4->next = NULL;     // node4 becomes the last node
    free(node5);

    // Print list
    printf("After deletion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
