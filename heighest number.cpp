//Question: Write a program using structure to find the student with the highest marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
int i,maxIndex=0;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
}

for(i=1;i<3;i++){
if(s[i].marks>s[maxIndex].marks)
maxIndex=i;
}

printf("\nStudent with highest marks:\n");
printf("Roll: %d\n",s[maxIndex].roll);
printf("Name: %s\n",s[maxIndex].name);
printf("Marks: %.2f",s[maxIndex].marks);

return 0;
}
