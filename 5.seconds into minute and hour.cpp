//.WAP to input seconds and convert into hours, minutes and seconds
#include<stdio.h>
int main(){
	float s,m,h;
	printf("Enter time in second");
	scanf("%f" ,&s);
	m=s/60;
	h=s/3600;
	printf("The %f second is equal to %f minutes and %f hours ",s,m,h);
	return 0;
}