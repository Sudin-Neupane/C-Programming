//Question: Write a program using structure to store student details and calculate total and average marks of each student.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float m1,m2,m3,total,avg;
};

int main(){
struct Student s[3];
int i;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of 3 subjects: ");
scanf("%d %s %f %f %f",&s[i].roll,s[i].name,&s[i].m1,&s[i].m2,&s[i].m3);

s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
s[i].avg = s[i].total / 3;
}

printf("\nStudent Details:\n");
for(i=0;i<3;i++){
printf("Roll: %d Name: %s Total: %.2f Average: %.2f\n",
s[i].roll,s[i].name,s[i].total,s[i].avg);
}

return 0;
}