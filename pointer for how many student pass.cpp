//Question: Write a program using structure and pointer to count how many students passed (marks >= 40).

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[5];
struct Student *ptr;
int i,count=0;

ptr = s;

for(i=0;i<5;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
}

for(i=0;i<5;i++){
if((ptr+i)->marks >= 40){
count++;
}
}

printf("\nNumber of students passed: %d",count);

return 0;
}
