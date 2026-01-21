#include<stdio.h>
int main()
{
    int day;
    printf("Enter number betn 1-7 \n ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("Sundy");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid day");
    }
    return 0;
}
