//Question: Write a program using structure to store the details of 3 students and sort them in ascending order of marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3],temp;
int i,j;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
}

for(i=0;i<3-1;i++){
for(j=0;j<3-1-i;j++){
if(s[j].marks > s[j+1].marks){
temp = s[j];
s[j] = s[j+1];
s[j+1] = temp;
}
}
}

printf("\nStudents sorted by marks (ascending):\n");
for(i=0;i<3;i++){
printf("Roll: %d Name: %s Marks: %.2f\n",s[i].roll,s[i].name,s[i].marks);
}

return 0;
}
