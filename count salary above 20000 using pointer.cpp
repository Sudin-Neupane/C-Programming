//Question: Write a program using structure and pointer to count how many employees have salary above 20000.

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

    ptr = e;

    for(i=0;i<5;i++){
        printf("Enter id, name and salary of employee %d: ",i+1);
        scanf("%d %s %f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->salary);
    }

    for(i=0;i<5;i++){
        if((ptr+i)->salary > 20000){
            count++;
        }
    }

    printf("\nNumber of employees with salary above 20000: %d",count);

    return 0;
}
