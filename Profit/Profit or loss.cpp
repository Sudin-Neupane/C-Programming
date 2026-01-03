// Read  CP , SP and find either how much profit / loss 
#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter Cost Price and Sell Price\n");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("The Profit is %d",profit);
		
	}
	else
	{
		loss=cp-sp;
		printf("The loss is %d",loss);
	}
	return 0;
}
