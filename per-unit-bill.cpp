/* 
An electronic company charges customer according to following criteria
unit		amount
0-200		rs.0.50 per unit
201-400		rs 100 plus rs0.65 per unit extra for exceeding 201
401-600 	rs 230 plus rs 0.80 per unit for exceeding 400
601+ 		rs 390 plus 1.00 per unit for exceeding 600
*/

#include<stdio.h>
int main()
{
	float a,b,c,d,amount,n;
	printf("Enter the total unit of the Electricity");
	scanf("%f",&n);
	if(n>=0&&n<=200)
	{
		amount=n*0.5;
		printf("Electricity fees is %.2f",amount);
	}
	else if(n>=201&&n<=400)
	{
		amount=100+n*0.65;
		printf("Electricity fees is %.2f",amount);
	}
	else if(n>=401&&n<=600)
	{
		amount=n*0.80+230;
		printf("Electricity fees is %.2f",amount);
		
	}
		else if(n<=601)
	{
		amount=n*1+390;
		printf("Electricity fees is %.2f",amount);
		
	}
	return 0;
}
