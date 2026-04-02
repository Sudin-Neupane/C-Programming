//Question: Write a program using structure and pointer to count employees whose salary is within a given range.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e[5];
struct Employee *ptr;
int i,count=0;
float min,max;

ptr = e;

for(i=0;i<5;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->salary);
}

printf("\nEnter minimum and maximum salary: ");
scanf("%f %f",&min,&max);

for(i=0;i<5;i++){
if((ptr+i)->salary >= min && (ptr+i)->salary <= max){
count++;
}
}

printf("\nNumber of employees within salary range: %d",count);

return 0;
}
