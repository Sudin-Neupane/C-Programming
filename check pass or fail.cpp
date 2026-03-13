//Question: Write a program using structure to store the details of a student and display the student who has passed (marks >= 40).

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
int i;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
}

printf("\nStudents who passed:\n");

for(i=0;i<3;i++){
if(s[i].marks>=40){
printf("Roll: %d\n",s[i].roll);
printf("Name: %s\n",s[i].name);
printf("Marks: %.2f\n",s[i].marks);
printf("\n");
}
}

return 0;
}
