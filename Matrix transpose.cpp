#include <stdio.h>

int main() {
    int matrix[2][2];
    int transpose[2][2];

    // Input the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the transpose
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Display the transpose
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
