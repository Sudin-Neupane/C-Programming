// total days to convert in year , month and days 
#include<stdio.h>

int main()
{
	int d,y,m,dm,dy;
	printf("Enter no. of days \n");
	scanf("%d",&d);
	m=d/30;
	dm=d%30;
	printf("%d have %d months and %d days \n",d,m,dm);
	
		y=d/365;
	dy=d%365;
	printf("%d have %d year and %d days\n ",d,y,dy);
	
	
	return 0;
}
