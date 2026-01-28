// using function , find out whether number is even or odd 

#include<stdio.h>
int check(int);

int main(){
	int a;
	printf("Enter a number ");
	scanf("%d",&a);	
	check (a);
	return 0;
}
int check(int x){
	
	if(x%2==0){
		printf("The number is even");
	}
	else{
		printf("The number is odd");
	}
	
}
