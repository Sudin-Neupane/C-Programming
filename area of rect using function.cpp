// area of rect using function
#include<stdio.h>
int area(int,int);
int main()
{
	int l,b;
	printf("Enter length and breadth of rectangle ");
	scanf("%d%d",&l,&b);
	printf("The area is %d",area(l,b));
	return 0;
}
int area(int m, int n){
	int a;
	a=m*n;
	return a;
}
