// Factorial using while loop 

#include <stdio.h>

int main()
{
    int n;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        fact = fact * n;
        n--;
    }

    printf("Factorial = %ld", fact);

    return 0;
}


