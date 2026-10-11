#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;
 
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}
 
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}
 
void peek() {
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top Element: %d\n", stack[top]);
}
 
void display() {
    for (int i = top; i >= 0; i--)
        printf("%d \n", stack[i]);
}
 
int main() {
    push(10); push(20); push(30);
    display();   // 30 20 10
    pop();       // removes 30
    peek();      // shows 20
    display();   // 20 10
    return 0;
}
