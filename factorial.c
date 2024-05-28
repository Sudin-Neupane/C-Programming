// calculate  factorial 
#include<stdio.h>//preprocessor
int fact( int );
int main(){
	
	int a , factorial , res; // variable declaration
	
	printf("ENter the number that you want to calculate fatorial");
	scanf("%d", &a);    // input value form user
	res = fact(a);// function calling
	printf(" the factorial is %d", res);// printing the value of factorial 
	
}
int fact(int x ){
int	fact = 1;
	int i;
	 for (i=1; i<=x ; i++){
	 	fact = fact * i;
	 }
	 return fact;	
}
