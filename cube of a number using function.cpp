// cube of a number using function 

#include<stdio.h>
int cube(int);
int main(){
	
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	printf("The cube of %d is %d",a,cube(a));
	

	return 0;
	
}
int cube(int x){
return x*x*x;	
}

