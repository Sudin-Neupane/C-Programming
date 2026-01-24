#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + (float)i / (i + 1);
    }

    printf("Sum of series = %.2f", sum);

    return 0;
}

