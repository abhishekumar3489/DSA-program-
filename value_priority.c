#include <stdio.h>

int q[5],p[5];

int main()
{
    int value, priority;

    printf("Enter value:");
    scanf("%d", &value);

    printf("Enter priority:");
    scanf ("%d", &priority);

    q[0]=value;
    p[0]=priority;

    printf("value=%d\n",q[0]);
    printf("Priorty=%d\n",p[0]);

return 0;
}
