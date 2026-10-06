#include <stdio.h>

#define MAX 100

int main()
{
    int a[MAX], result[MAX], stack[MAX];
    int n, top = -1;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        while (top != -1 && stack[top] <= a[i])
        {
            top--;
        }

        if (top == -1)
            result[i] = -1;
        else
            result[i] = stack[top];

        top++;
        stack[top] = a[i];
    }

    printf("Next Greater Elements:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
