//12 . generate a table of given input number 

#include<stdio.h>
int main()
{
	int n,i,table;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table=i*n;
		printf("%d * %d is %d\n ",n,i,table);	
	}
	return 0;
}
