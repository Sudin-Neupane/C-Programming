// using call by reference 
#include<stdio.h>
void swap ( int *a , int *b);
int main(){
	int *a=10;
	int *b=30;
	
	swap(&a , &b);// call by reference
	 printf(" the shorted elements  if a=%d and b=%d is :",a,b);
	 
}
void swap( int *a ,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
