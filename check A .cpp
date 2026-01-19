// check either it is A or a 


#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch == 'A' || ch == 'a')
        printf("It is A or a");
    else
        printf("It is not A or a");

    return 0;
}
