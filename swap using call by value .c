// POinter 
// swap using call by value and call by reference 
// call by value:
#include<stdio.h>
void swap(int a , int b);
int main(){
	int a=30,b=40;
	
	swap(a,b);// call by value
	printf("Elements after swapping is: a=%d  and b= %d", a,b);
	
}
void swap( int a , int b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}
//end
