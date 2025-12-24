#include<stdio.h>
int main()
{
	int i,m,n,lar,sma,larp,smap;
	printf("Enter the no. of Elemenets\n");
	scanf("%d",&m);
	printf("Enter element no.1: \t ");
	scanf("%d",&n);
		n=lar=sma;
		for(i=2;i<=m;i++){
			printf("Enter element no.%d: \t",i);
			scanf("%d",&n);
			if(lar>n){
				lar=n;
				larp=i;
				if(sma<n){
					sma=n;
					larp=i;
					
				}
			}
		}
		printf("The largest number is %d and position is %d",lar,larp);
		printf("The smallest number is %d and position is %d",sma,smap);
	
	
	
	
	return 0;	
}




