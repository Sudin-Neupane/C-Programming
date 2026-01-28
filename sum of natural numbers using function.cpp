// sum of first N natural numbers using functions 

#include<stdio.h>
int sum(int);
int main(){
	int n,summ=0;
	
	printf("Enter N numbers");
	scanf("%d",&n);
		printf("The sum is %d",sum(n));
	
	return 0;
}
int sum(int m){
	int i;
	int summ=0;
	for(i=0;i<=m;i++){
		summ=summ+i;
	}
	return  summ;
}
