#include<stdio.h>
#include<math.h>
int main()
{
	int ans, x,n;
	printf("Enter a Number\n");
	scanf("%d",&x);
	printf("Enter it's nth power \n");
	scanf("%d",&n);
	ans=pow(x,n);
	printf("the %d^%d is %d",x,n,ans);
}
