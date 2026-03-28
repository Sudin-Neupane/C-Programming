//Question: Write a program using structure and pointer to update the marks of a student by roll number.

#include<stdio.h>

struct Student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct Student s[3];
    struct Student *ptr;
    int i,search,found=0;
    float newMarks;

    ptr = s;

    for(i=0;i<3;i++){
        printf("Enter roll, name and marks of student %d: ",i+1);
        scanf("%d %s %f",&(ptr+i)->roll,(ptr+i)->name,&(ptr+i)->marks);
    }

    printf("\nEnter roll number to update: ");
    scanf("%d",&search);

    for(i=0;i<3;i++){
        if((ptr+i)->roll == search){
            printf("Enter new marks: ");
            scanf("%f",&newMarks);
            (ptr+i)->marks = newMarks;
            found = 1;
            break;
        }
    }

    if(found==1){
        printf("\nUpdated Student Details:\n");
        printf("Roll: %d Name: %s Marks: %.2f\n",
        (ptr+i)->roll,(ptr+i)->name,(ptr+i)->marks);
    }
    else{
        printf("Student not found");
    }

    return 0;
}
