//Question: Write a program using structure to store the details of 3 students and find the average marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
int i;
float sum=0,avg;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
sum=sum+s[i].marks;
}

avg=sum/3;

printf("\nAverage Marks: %.2f\n",avg);

printf("\nStudent Details:\n");
for(i=0;i<3;i++){
printf("Roll: %d Name: %s Marks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
}

return 0;
}
