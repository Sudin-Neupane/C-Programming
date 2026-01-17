// WAP to find sum of the following series

/*
sum=1 + 1/2 + 1+/3 + 1/4 + ...........+1/n


 
*/

#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	
	printf("enter N number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum = sum + (1.0/i);
		
	}
	printf("The sum is %.2f",sum);

	return 0;
}
