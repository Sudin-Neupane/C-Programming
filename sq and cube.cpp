// Square and Cube of first N nautuan numbers 
#include <stdio.h>

int main()
{
    int n, i;
    int sum_sq = 0, sum_cb = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum_sq = sum_sq + (i * i);
        sum_cb = sum_cb + (i * i * i);
    }

    printf("Sum of squares = %d\n", sum_sq);
    printf("Sum of cubes = %d", sum_cb);

    return 0;
}
