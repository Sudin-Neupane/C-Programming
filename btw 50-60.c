// count the number of students  having weight number between 50-60 
#include<stdio.h>
int count( int[]);
int main(){
	int a[5],res,i;
		for(i=0;i<=5;i++){
	printf("enter the weight of student");
	scanf("%d" , a[i]);
}
res = count(a);
printf(" The number of students having weight btn 50-60 is %d", res);	
}
int count( int x[]){
	int ct=1, i;
	for (i=0;i<=5;i++){// count the number of students  having weight number between 50-60 
#include<stdio.h>
int count( int[]);
int main(){
	int a[5],res,i;
		for(i=0;i<=5;i++){
	printf("enter the weight of student");
	scanf("%d" , a[i]);
}
res = count(a);
printf(" The number of students having weight btn 50-60 is %d", res);	
}
int count( int x[]){
	int ct=1, i;
	for (i=0;i<=5;i++){
		if(x[i]>50 && x[i]>60){
			ct = ct + 1;
			
		}
	}
	
	return ct;
}


		if(x[i]>50 && x[i]>60){
			ct = ct + 1;
			
		}
	}
	
	return ct;
}

