// wap a program to find simple intrest
#include<stdio.h>
int main(){
	float i,p,t,r;
	printf("Enter principle(p),Time (t) and Rate(r) respectively");
	scanf("%f%f%f",&p,&t,&r);
	i=(p*t*r)/100;
	printf("The simple intrest of the given data is %f",i);
	return 0;
}
