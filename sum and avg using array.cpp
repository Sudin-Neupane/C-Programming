#include <stdio.h>

int main() {
    int rows, cols;
    int arr[50][50];
    int sum = 0;
    float average;


    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }


    average = (float)sum / (rows * cols);


    printf("Sum of all elements = %d\n", sum);
    printf("Average of all elements = %.2f\n", average);

    return 0;
}
