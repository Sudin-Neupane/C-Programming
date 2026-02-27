//Question: Write a program to calculate the power of a number (x^y) without using pow() function.

#include<stdio.h>

int main(){
int x,y,i;
long long result=1;

printf("Enter base and exponent: ");
scanf("%d%d",&x,&y);

for(i=1;i<=y;i++){
result=result*x;
}

printf("Result: %lld",result);

return 0;
}
