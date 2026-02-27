//Question: Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main(){
int year;

printf("Enter a year: ");
scanf("%d",&year);

if((year%4==0&&year%100!=0)||year%400==0)
printf("Leap Year");
else
printf("Not Leap Year");

return 0;
}
