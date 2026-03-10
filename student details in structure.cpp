//Question: Write a program using structure to store and display the details of a student.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s;

printf("Enter roll number: ");
scanf("%d",&s.roll);

printf("Enter name: ");
scanf("%s",s.name);

printf("Enter marks: ");
scanf("%f",&s.marks);

printf("\nStudent Details:\n");
printf("Roll: %d\n",s.roll);
printf("Name: %s\n",s.name);
printf("Marks: %.2f",s.marks);

return 0;
}
