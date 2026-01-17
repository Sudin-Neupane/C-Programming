// Write a program to find sum and avg of all numbers form  1 to n which are divisible by x but not by y. 

#include<stdio.h>
int main()
{
	int n,i,x,y,sum=0,avg,count=0;
	printf("Enter N number");
	scanf("%d",&n);
	printf("Enter value of x and y ");
	scanf("%d%d",&x,&y);
	for(i=1;i<=n;i++){
		if(i%x==0 &&i%y!=0){
			sum=sum+i;
			count++;
		}
		
	}
	if(count!=0){
	
	avg=sum/count;
	printf("The sum is %d and avg is %d",sum,avg);
}
	return 0;
}
