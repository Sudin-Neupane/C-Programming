//wap to read a number and check the number is perfect or nor 
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("This is perfect number ");
		
	}
	else{
		printf("This is not a perfect number ");
	}
	return 0;
}
