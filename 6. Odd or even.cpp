//WAPto check if the given number is odd or even
#include<stdio.h>
int main(){
	int i;
	printf("Enter any number to check");
	scanf("%d",&i);
	if(i%2==0){
		printf(" the number %d is even",i);
	}
	else{
		printf("the number %d is odd",i);
	}
	return 0;
}
