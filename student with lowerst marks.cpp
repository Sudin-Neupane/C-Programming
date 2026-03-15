//Question: Write a program using structure to store the details of 3 students and find the student with the lowest marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
int i,min=0;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
}

for(i=1;i<3;i++){
if(s[i].marks < s[min].marks)
min = i;
}

printf("\nStudent with Lowest Marks:\n");
printf("Roll: %d\n",s[min].roll);
printf("Name: %s\n",s[min].name);
printf("Marks: %.2f\n",s[min].marks);

return 0;
}
