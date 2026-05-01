// array for secoond last elements 
#include <stdio.h>
int main() {
    int arr[100], n, i;
    int largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = second = arr[0];

    // Find largest of the array 
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    second = -1; // assuming all numbers are +ve 
    for(i = 0; i < n; i++) {
        if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }}
    printf("Second largest element = %d", second);

    return 0;
}
