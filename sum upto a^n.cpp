// sum = a + a^2 + a^3 + ..... + a^n 

#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,sum=0,i;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("Enter value of a");
	scanf("%d",&a);
	for(i=1;i<=n;i++){
		sum = sum + pow(a,i);
	}
	
printf("The sum is %d",sum);
	return 0;
}
