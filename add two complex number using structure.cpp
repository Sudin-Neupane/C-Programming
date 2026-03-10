//Question: Write a program using structure to add two complex numbers.

#include<stdio.h>

struct Complex{
float real;
float imag;
};

int main(){
struct Complex c1,c2,sum;

printf("Enter real and imaginary part of first complex number: ");
scanf("%f %f",&c1.real,&c1.imag);

printf("Enter real and imaginary part of second complex number: ");
scanf("%f %f",&c2.real,&c2.imag);

sum.real = c1.real + c2.real;
sum.imag = c1.imag + c2.imag;

printf("Sum = %.2f + %.2fi",sum.real,sum.imag);

return 0;
}
