#include <stdio.h>

#define MAX 5

int q[MAX];
int front = -1, rear = -1;

int main()
{
    // First insertion
    rear = (rear + 1) % MAX;
    q[rear] = 10;
    front = 0;

    // Second insertion
    rear = (rear + 1) % MAX;
    q[rear] = 20;

    // Third insertion
    rear = (rear + 1) % MAX;
    q[rear] = 30;

    // Fourth insertion
    rear = (rear + 1) % MAX;
    q[rear] = 40;

    // Fifth insertion
    rear = (rear + 1) % MAX;
    q[rear] = 50;

    printf("Queue:\n");
    for(int i = 0; i < MAX; i++)
        printf("%d ", q[i]);

    // Delete 10 and 20
    printf("\n\nDequeued: %d\n", q[front]);
    front = (front + 1) % MAX;

    printf("Dequeued: %d\n", q[front]);
    front = (front + 1) % MAX;

    // Now rear is at index 4
    // Insert 60 -> rear goes back to index 0

    rear = (rear + 1) % MAX;
    q[rear] = 60;

    printf("\nInserted 60 at index %d\n", rear);

    return 0;
}
