//Question: Write a program using structure and pointer to compare salaries of two employees and display the higher one.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e1,e2;
struct Employee *p1=&e1,*p2=&e2;

printf("Enter id, name and salary of first employee: ");
scanf("%d %s %f",&p1->id,p1->name,&p1->salary);

printf("Enter id, name and salary of second employee: ");
scanf("%d %s %f",&p2->id,p2->name,&p2->salary);

if(p1->salary > p2->salary){
printf("\nEmployee with higher salary:\n");
printf("ID: %d Name: %s Salary: %.2f\n",p1->id,p1->name,p1->salary);
}
else{
printf("\nEmployee with higher salary:\n");
printf("ID: %d Name: %s Salary: %.2f\n",p2->id,p2->name,p2->salary);
}

return 0;
}
