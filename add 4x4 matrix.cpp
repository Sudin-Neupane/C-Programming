// two 4x4 matrices 

#include <stdio.h>

int main()
{
    int a[10], i, n, choice, x, y, count_even = 0, count_odd = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n1.Print Array\n2.Count Even Odd\n3.Search X\n4.Increase Negative by Y\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                if(a[i] % 2 == 0)
                    count_even++;
                else
                    count_odd++;
            }
            printf("Even = %d, Odd = %d", count_even, count_odd);
            break;

        case 3:
            printf("Enter x: ");
            scanf("%d", &x);
            for(i = 0; i < n; i++)
            {
                if(a[i] == x)
                    found = 1;
            }
            if(found == 1)
                printf("Found");
            else
                printf("Not Found");
            break;

        case 4:
            printf("Enter y: ");
            scanf("%d", &y);
            for(i = 0; i < n; i++)
            {
                if(a[i] < 0)
                    a[i] = a[i] + y;
            }
            printf("Updated array:\n");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
