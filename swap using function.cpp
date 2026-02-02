// WAP to swap values to two variables by using function 
#include<stdio.h>
void swap(int & , int &);
int main(){
	
	int a, b;
	printf("Enter value of a and b ");
	scanf("%d%d",&a,&b);
	printf("Before : a=%d, \tb=%d",a,b);
	swap(a,b);
	printf("After a=%d,\tb=%d",a,b );
	return 0;
}
void swap(int &x , int &y){
	int temp=x;
	x=y;
	y=temp;
}
