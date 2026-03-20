//Question: Write a program using structure and pointer to find the student with highest marks.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
struct Student *ptr;
int i,maxIndex=0;

ptr = s;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
}

for(i=1;i<3;i++){
if((ptr+i)->marks > (ptr+maxIndex)->marks){
maxIndex = i;
}
}

printf("\nStudent with Highest Marks:\n");
printf("Roll: %d\n",(ptr+maxIndex)->roll);
printf("Name: %s\n",(ptr+maxIndex)->name);
printf("Marks: %.2f\n",(ptr+maxIndex)->marks);

return 0;
}
