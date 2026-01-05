// Prime or not

#include<stdio.h>
int main()
{
int n,i,a=0;
printf("Enter a number:");
scanf("%d",&n);
if(n<=1)
{
printf("Not Prime");
}
else
{
for(i=2;i<=n;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if(a==0){

printf("This is Prime number");
}
else{

printf("This is Not Prime NUmber");
}
}
return 0;
}
