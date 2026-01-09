// mini calculator using switch statement 

#include<stdio.h>
int main()
{
float a,b,result;
int choice;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
result=a+b;
printf("Result=%.2f",result);
break;
case 2:
result=a-b;
printf("Result=%.2f",result);
break;
case 3:
result=a*b;`
printf("Result=%.2f",result);
break;
case 4:
result=a/b;
printf("Result=%.2f",result);
break;
default:
printf("Please enter only 1,2,3,4  only ");
}
return 0;
}
