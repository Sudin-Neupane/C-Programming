//Question: Write a program using structure to store two students' details and swap their marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s1,s2;
float temp;

printf("Enter roll, name and marks of first student: ");
scanf("%d %s %f",&s1.roll,s1.name,&s1.marks);

printf("Enter roll, name and marks of second student: ");
scanf("%d %s %f",&s2.roll,s2.name,&s2.marks);

temp = s1.marks;
s1.marks = s2.marks;
s2.marks = temp;

printf("\nAfter Swapping Marks:\n");

printf("Student 1 -> Roll: %d Name: %s Marks: %.2f\n",s1.roll,s1.name,s1.marks);
printf("Student 2 -> Roll: %d Name: %s Marks: %.2f\n",s2.roll,s2.name,s2.marks);

return 0;
}
