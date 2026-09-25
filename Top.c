#include <stdio.h>

int main()
 {
    int stack[6];
    int top = -1;

    //push 10
    top++;
    stack[top] = 10;

    //push 20
    top++;
    stack[top] = 20;

    //push 30
    top++;
    stack[top] = 30;

    //push 40
    top++;
    stack[top] = 40;

    //push 50
    top++;
    stack[top] = 50;

    //push 60
    top++;
    stack[top] = 60;
    
    printf("stack ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }

    return 0;
}
