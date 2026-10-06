#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top < MAX - 1)
    {
        top++;
        stack[top] = ch;
    }
}

char pop()
{
    if (top == -1)
        return '\0';

    return stack[top--];
}

int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("Reversed string: ");

    while (top != -1)
    {
        printf("%c", pop());
    }

    printf("\n");

    return 0;
}
