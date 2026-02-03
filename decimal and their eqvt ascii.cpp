// wap to print an decimaml digit and their eqvt ASCII vakue 
#include<stdio.h>
int main(){
	
	
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d\t %c\n",i,i);
	}
	return 0;
}
