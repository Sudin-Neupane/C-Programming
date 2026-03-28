//Question: Write a program using structure and pointer to find the total and average salary of employees.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e[5];
struct Employee *ptr;
int i;
float total=0,avg;

ptr = e;

for(i=0;i<5;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->salary);
total = total + (ptr+i)->salary;
}

avg = total/5;

printf("\nTotal Salary: %.2f\n",total);
printf("Average Salary: %.2f\n",avg);

return 0;
}
