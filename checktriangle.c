#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the lengths of the three sides of the triangle:");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        printf("The triangle is valid.\n");
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The area of the triangle is:\n %.2f", area);
    }
    else
    {
        printf("The triangle is not valid.");
    }
}