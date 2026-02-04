// strcpy 

#include<stdio.h>
#include<string.h>
int main(){
	char a[10]="ram";
	char b[10]="hari";
	printf("Before =%s %s ",a,b);
	strcpy(a,b);
	printf("\n after %s%s",a,b);
	return 0;
}
