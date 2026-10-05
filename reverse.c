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
    printf("Array in reverse order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
