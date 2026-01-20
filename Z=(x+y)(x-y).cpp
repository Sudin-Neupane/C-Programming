// 5.  read value of x and y and print the result formZ=(x+y)(x-y)
#include<stdio.h>
int main()
{
int x,y,Z;
printf("Enter x and y:");
scanf("%d%d",&x,&y);
Z=(x+y)*(x-y);
printf("Z=%d",Z);
return 0;
}
