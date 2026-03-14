//Question: Write a program using structure to store the details of 4 employees and calculate the total salary.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e[4];
int i;
float total=0;

for(i=0;i<4;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
total = total + e[i].salary;
}

printf("\nTotal Salary of all employees: %.2f\n",total);

printf("\nEmployee Details:\n");
for(i=0;i<4;i++){
printf("ID: %d Name: %s Salary: %.2f\n",e[i].id,e[i].name,e[i].salary);
}

return 0;
}
