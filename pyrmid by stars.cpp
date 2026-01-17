 Print in thi pattern 
    /*
    *
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // this is for printing  spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // this is for printing stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // for the next line:::: 
        printf("\n");
    }

    return 0;
}
