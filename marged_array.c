#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter first sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter second sorted array: ");
    for(j = 0; j < m; j++)
        scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while(i < n && j < m) {
        if(a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < n)
        c[k++] = a[i++];

    while(j < m)
        c[k++] = b[j++];

    printf("Merged array: ");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
