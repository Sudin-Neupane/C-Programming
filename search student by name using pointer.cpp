//Question: Write a program using structure and pointer to search a student by name.

#include<stdio.h>
#include<string.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3];
struct Student *ptr;
int i,found=0;
char search[50];

ptr = s;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
}

printf("\nEnter name to search: ");
scanf("%s",search);

for(i=0;i<3;i++){
if(strcmp((ptr+i)->name,search)==0){
printf("\nStudent Found:\n");
printf("Roll: %d\n",(ptr+i)->roll);
printf("Name: %s\n",(ptr+i)->name);
printf("Marks: %.2f\n",(ptr+i)->marks);
found=1;
break;
}
}

if(found==0)
printf("Student not found");

return 0;
}
