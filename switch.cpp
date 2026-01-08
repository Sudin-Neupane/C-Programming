#include<stdio.h>
int main()
{
float b,h,r,l,w,area;
int choice;
printf(" Enter 1.Triangle\n2.Circle\n3.Rectangle\n to Calculate it's Area'");

scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter base and height:");
scanf("%f%f",&b,&h);
area=0.5*b*h;
printf("Area=%.2f",area);
break;
case 2:
printf("Enter radius:");
scanf("%f",&r);
area=3.14*r*r;
printf("Area=%.2f",area);
break;
case 3:
printf("Enter length and width:");
scanf("%f%f",&l,&w);
area=l*w;
printf("Area=%.2f",area);
break;
default:
printf("Enter 1 , 2 or 3 only");
}
return 0;
}
