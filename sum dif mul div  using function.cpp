//  four calculations using functions 
#include<stdio.h>
	int sum(int,int);
	int dif(int, int);
	int mul(int, int);
	float div(float, float);
int main()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);

	printf("The sum is %d \n the difference is %d \n the product is %d \n the division is %.2f \n ",sum(a,b),dif(a,b),mul(a,b),div(a,b));
return 0;

}
// function call 
int sum(int x, int y){
	return x+y;
	
}
int dif(int x , int y){
	return x-y;
}
int mul(int x , int y){
	return x*y;
}
float div(float x , float y){
	return x/y;
}





