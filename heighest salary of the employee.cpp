//Question: Write a program using structure to store employee details and display the employee with the highest salary.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e[3];
int i,max=0;

for(i=0;i<3;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
}

for(i=1;i<3;i++){
if(e[i].salary > e[max].salary)
max = i;
}

printf("\nEmployee with Highest Salary:\n");
printf("ID: %d\n",e[max].id);
printf("Name: %s\n",e[max].name);
printf("Salary: %.2f",e[max].salary);

return 0;
}
