//Question: Write a program using structure and pointer to sort students by marks in descending order.

#include<stdio.h>

struct Student{
int roll;
char name[50];
float marks;
};

int main(){
struct Student s[3],temp;
struct Student *ptr;
int i,j;

ptr = s;

for(i=0;i<3;i++){
printf("Enter roll, name and marks of student %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
}

for(i=0;i<3-1;i++){
for(j=0;j<3-1-i;j++){
if((ptr+j)->marks < (ptr+j+1)->marks){
temp = *(ptr+j);
*(ptr+j) = *(ptr+j+1);
*(ptr+j+1) = temp;
}
}
}

printf("\nStudents sorted by marks (descending):\n");
for(i=0;i<3;i++){
printf("Roll: %d Name: %s Marks: %.2f\n",
(ptr+i)->roll,(ptr+i)->name,(ptr+i)->marks);
}

return 0;
}
