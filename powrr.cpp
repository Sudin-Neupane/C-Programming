#include <stdio.h>

int main()
{
    int x, n, i, power = 1, sum = 1;

    printf("Enter x and n: ");
    scanf("%d%d", &x, &n);

    for(i = 1; i <= n; i++)
    {
        power = power * x;
        sum = sum + power;
    }

    printf("Sum = %d", sum);

    return 0;
}