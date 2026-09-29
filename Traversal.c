#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;     // move to next node
    }
    printf("NULL\n");
}

int main() {
    // manually creating 3 nodes: 10 -> 20 -> 30 -> NULL
    struct Node n1, n2, n3;
    n1.data = 10; n1.next = &n2;
    n2.data = 20; n2.next = &n3;
    n3.data = 30; n3.next = NULL;

    traverse(&n1);
    return 0;
}
