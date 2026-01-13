// find largest and smallest using array
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
