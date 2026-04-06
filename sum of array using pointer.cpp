#include <stdio.h>

int main() {
    int a[5], i, sum = 0;
    int *p = a;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    for(i=0;i<5;i++)
        sum += *(p + i);

    printf("Sum = %d", sum);

    return 0;
}
