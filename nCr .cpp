// nCr=n!/(n-r)!r!

#include<stdio.h>
int factorial(int);
int main(){
	int n,r,ncr,up,d,dz, d1,d2;
	printf("Enter the value of n and r ");
	scanf("%d%d",&n,&r);
	if(n<r){
		printf("No value");
		
	}
	else if(n==r){
		printf("Result is 1 ");
	}
	else{
		up=factorial(n);
		d1=factorial(r);
		d2=factorial(n-r);
		ncr=up/(d1*d2);
		printf("%d",ncr);
	}
	return 0;
}
int factorial(int x){
	int i,up=1;
	for(i=1;i<=x;i++){
		up=up*i;
	}
	return up;
}



int factorials(int y){
	int d1=1;
	int i;
	for(i=1;i<=y;i++){
	d1=d1*i;
	}
	return d1;
}
int factorial(int z,int a){
	int dz=1;
	int i,s;
	if((z-a)>0){
		s=z-a;
		for(i=1;i<=z;i++){
			for(i=1;i<=a;i++){
				dz=dz*s;
			}
			return dz;
		}
	}
}

	

