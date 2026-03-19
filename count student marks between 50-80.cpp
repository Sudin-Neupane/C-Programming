//Question: Write a program using structure to store student details and count how many students have marks between 50 and 80.

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
if(s[i].marks>=50 && s[i].marks<=80){
count++;
}
}

printf("\nNumber of students with marks between 50 and 80: %d",count);

return 0;
}