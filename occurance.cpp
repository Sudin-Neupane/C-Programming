//10 .  occurance
#include<stdio.h>
int main()
{
	int a,n,count;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter the number for occurance");
	scanf("%d",&a);
	for(;n!=0;n/=10){
		if(n%10==a){
			count++;
		}
	}
	printf("%d is repeated %d times ",a,count);
	return 0;
}
