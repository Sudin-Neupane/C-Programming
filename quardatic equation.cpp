// 3.a    Write a program to solve quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float d,r1,r2;

    printf("Enter a, b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    d=b*b-4*a*c;

    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2 =(-b -sqrt(d))/(2*a);
        printf("Roots are %.2f and %.2f", r1, r2);
    }
    else if(d==0){
	
        r1=-b/(2*a);
        printf("Root is %.2f", r1);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}
