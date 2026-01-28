// Greatest among 3 numbers using functions 

#include<stdio.h>
int greatest(int ,int, int);
int main(){
	int a ,b,c,lar;
	printf("Enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	printf("The Greatest among %d , %d and %d is %d ",a,b,c,greatest(a,b,c));
	return 0;
}
int greatest(int x,int y,int z){
	

if(x>y && x>z){
	return x;
}	
else if(y>z){
	return y;
}
else{
	return z;
}




}
