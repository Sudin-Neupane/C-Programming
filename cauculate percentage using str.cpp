//Question: Write a program using structure to store the details of a student and calculate percentage.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float m1,m2,m3,percentage;
};

int main(){
struct Student s;

printf("Enter roll number: ");
scanf("%d",&s.roll);

printf("Enter name: ");
scanf("%s",s.name);

printf("Enter marks of three subjects: ");
scanf("%f %f %f",&s.m1,&s.m2,&s.m3);

s.percentage = (s.m1 + s.m2 + s.m3)/3;

printf("\nStudent Details:\n");
printf("Roll: %d\n",s.roll);
printf("Name: %s\n",s.name);
printf("Percentage: %.2f",s.percentage);

return 0;
}
