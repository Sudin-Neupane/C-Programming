//Question: Write a program using structure and pointer to calculate the average marks of students.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[5];
struct Student *ptr;
int i;
float sum=0,avg;

ptr = s;

for(i=0;i<5;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
sum = sum + (ptr+i)->marks;
}

avg = sum/5;

printf("\nAverage Marks: %.2f",avg);

return 0;
}
