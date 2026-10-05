#include <stdio.h>

int main() {
    int arr[5];
    int i;

    // Input 5 elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display 5 elements
    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
