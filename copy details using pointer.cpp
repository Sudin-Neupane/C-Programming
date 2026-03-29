//Question: Write a program using structure and pointer to copy details of one employee to another.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e1,e2;
struct Employee *p1=&e1,*p2=&e2;

printf("Enter id, name and salary of employee 1: ");
scanf("%d %s %f",&p1->id,p1->name,&p1->salary);

// Copy using pointer
*p2 = *p1;

printf("\nCopied Employee Details:\n");
printf("ID: %d\n",p2->id);
printf("Name: %s\n",p2->name);
printf("Salary: %.2f\n",p2->salary);

return 0;
}
