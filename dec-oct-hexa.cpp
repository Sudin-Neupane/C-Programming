// 22. C program to Print value in Decimal, Octal , Hexa-decimal using printf


#include<stdio.h>
int main()
{
	int n;
	printf("Enter a Number");
	scanf("%d",&n);
	printf("The Decimal is %d\n",n);
	printf("The Octal is %o\n",n);
	printf("The Hexa-Deciml is %X",n);
	return 0;
}


