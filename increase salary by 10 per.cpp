//Question: Write a program using structure and pointer to increase salary of all employees by 10%.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
struct Employee e[3];
struct Employee *ptr;
int i;

ptr = e;

for(i=0;i<3;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->salary);
}

for(i=0;i<3;i++){
(ptr+i)->salary = (ptr+i)->salary * 1.10;
}

printf("\nUpdated Employee Details (After 10%% Increment):\n");
for(i=0;i<3;i++){
printf("ID: %d Name: %s Salary: %.2f\n",
(ptr+i)->id,(ptr+i)->name,(ptr+i)->salary);
}

return 0;
}
