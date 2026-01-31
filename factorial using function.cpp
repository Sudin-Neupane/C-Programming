// WAP to find factorial of a number using function passing argurment and taking return value

#include<stdio.h>
int fact(int);
int main(){
	int factorial , res,a;
	printf("Enter a number");
	scanf("%d",&a);
	res=fact(a);
	printf("Factorial is %d",res);
	return 0;
}
int fact(int x){
	
	int fact=1;
	int i;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}

