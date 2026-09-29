#include <stdio.h>

int main()
 {
    int stack[5] ={10, 20, 30};
    int top = 2;

    //pop
    printf("Delete elemaent = %d\n", stack[top]);
    top--;

    printf("stack after POP: ");

    for(int i = top; i >= 0; i--)
    {
        printf("%d", stack[i]);
    }
    return 0; 
} 
