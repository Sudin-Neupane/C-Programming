// Wap a program to identify that which one is greatest among 3 numbers 
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter another number number");
	scanf("%d",&b);
	printf("Enter one more number");
	scanf("%d",&c);
	if(a>b){
		if(a>c){
			printf("'a' is greatest",a);
		}
		else("'c' is greatest",c);
	}
	else{
		if(b>c){
			printf("'b' is greatest",b);
		}
		else{
		printf("'c' is greatest");
		}
		
	}
	return 0;
	
}

 