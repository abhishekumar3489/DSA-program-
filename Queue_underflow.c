#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue()
{
    if (rear == MAX - 1)
    {
        printf("Queue full\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        // Insertion
        rear++;
        queue[rear] = 10;
        printf("Enqueued: %d\n", queue[rear]);

        rear++;
        queue[rear] = 20;
        printf("Enqueued: %d\n", queue[rear]);

        rear++;
        queue[rear] = 30;
        printf("Enqueued: %d\n", queue[rear]);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        // Deletion 1
        printf("Dequeued: %d\n", queue[front]);
        front++;

        // Deletion 2
        printf("Dequeued: %d\n", queue[front]);
        front++;
    }
}

int main()
{
    enqueue();

    dequeue();

    return 0;
}
