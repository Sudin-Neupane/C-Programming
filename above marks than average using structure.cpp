//Question: Write a program using structure to store student details and display students whose average marks are above class average.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
int i;
float total=0,avg;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
total = total + s[i].marks;
}

avg = total/3;

printf("\nClass Average: %.2f\n",avg);
printf("\nStudents above class average:\n");

for(i=0;i<3;i++){
if(s[i].marks > avg){
printf("Roll: %d Name: %s Marks: %.2f\n",
s[i].roll,s[i].name,s[i].marks);
}
}

return 0;
}