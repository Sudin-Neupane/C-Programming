//Question: Write a program using structure and pointer to store details of students and display them.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
struct Student *ptr;
int i;

ptr = s;   // pointer points to array of structures

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
}

printf("\nStudent Details:\n");
for(i=0;i<3;i++){
printf("Roll: %d Name: %s Marks: %.2f\n",
(ptr+i)->roll,(ptr+i)->name,(ptr+i)->marks);
}

return 0;
}
