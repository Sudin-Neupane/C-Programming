//Question: Write a program using structure to store the details of 5 students and count how many students scored more than 60 marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[5];
int i,count=0;

for(i=0;i<5;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
}

for(i=0;i<5;i++){
if(s[i].marks>60)
count++;
}

printf("\nNumber of students scoring more than 60 marks: %d",count);

return 0;
}
