// Grading of student
#include<stdio.h>
int main()
{
    float marks;
    printf("Enter the marks of the student: ");
    scanf("%f",&marks);
    
    if(marks>=90)
    {
        printf("Grade is A+");
    }
     else if(marks>=80&&marks<90)
    {
        printf("Grade is A");
    }
     else if(marks>=70&&marks<80)
    {
        printf("Grade is B+");
    }
     else if(marks>=60 && marks< 70)
    {
        printf("Grade is B");
    }
         else if(marks >=50 && marks< 60)
    {
        printf("Grade is C+");
    }
     else if(marks >=40 && marks <50)
    {
        printf("Grade is C");
    }
    else if(marks<40)
    {
        printf("Grade is Fail");
    }
    
    return 0;
}

