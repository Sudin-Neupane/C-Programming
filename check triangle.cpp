//13. check triangle whether it is Equilateral , Isosceles or scalene
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three sides of Triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&a==c)
	{
		printf("This triangle is Equilateral");
	}
else if(a==b&&a!=c||b==c&&a!=b||c==a&&c!=b){
		printf("this triangle is Isosceles");	
	}
	else{
		printf("the triangle is Scalene");
	}	
	return 0;
}
