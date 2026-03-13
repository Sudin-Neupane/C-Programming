//Question: Write a program using structure to store the details of a student and determine the grade based on marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
char grade;
};

int main(){
struct Student s;

printf("Enter roll number: ");
scanf("%d",&s.roll);

printf("Enter name: ");
scanf("%s",s.name);

printf("Enter marks: ");
scanf("%f",&s.marks);

if(s.marks>=80)
s.grade='A';
else if(s.marks>=60)
s.grade='B';
else if(s.marks>=40)
s.grade='C';
else
s.grade='F';

printf("\nStudent Details:\n");
printf("Roll: %d\n",s.roll);
printf("Name: %s\n",s.name);
printf("Marks: %.2f\n",s.marks);
printf("Grade: %c\n",s.grade);

return 0;
}
