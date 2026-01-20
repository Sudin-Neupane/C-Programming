// WAP to find sum of the following series

/*
sum= 1/2 + 2/3 + 3/4 + ...........+n/n+1


 
*/
#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	printf("Enter n numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum + (i/(i+1.0));
	}
	printf("The sum is %.2f",sum);
}
