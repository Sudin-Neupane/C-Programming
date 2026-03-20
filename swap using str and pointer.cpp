//Question: Write a program using structure and pointer to swap two students' records.

#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct Student s1,s2,temp;
    struct Student *p1=&s1,*p2=&s2;

    printf("Enter roll, name and marks of first student: ");
    scanf("%d %s %f",&p1->roll,p1->name,&p1->marks);

    printf("Enter roll, name and marks of second student: ");
    scanf("%d %s %f",&p2->roll,p2->name,&p2->marks);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("\nAfter Swapping:\n");
    printf("Student 1 -> Roll: %d Name: %s Marks: %.2f\n",p1->roll,p1->name,p1->marks);
    printf("Student 2 -> Roll: %d Name: %s Marks: %.2f\n",p2->roll,p2->name,p2->marks);

    return 0;
}
