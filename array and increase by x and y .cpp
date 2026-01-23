//1.a..... WAP  a program to read n numbers in an array then increase all even by x and odd by y 

#include<stdio.h>
int main()
{
	int n,i,x,y;
	int a[100];
	printf("Enter numbers of array \n");
	scanf("%d",&n);
	printf("Enter the value of x and y ");
	scanf("%d%d",&x,&y);
	printf("Enter Array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			a[i] = a[i]+x;
		}
		else{
			a[i]=a[i]+y;
		}
	}
	printf("The resultant array is ");
	for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
return 0;	
}

