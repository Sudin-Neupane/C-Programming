// Multiplacation of N numbers : 
#include<stdio.h>    // preprocessor 
int mul(int, int );
int main(){
 int a , b, mul, res;   // input variables

// taking input
 
 printf("Enter two  numbers that you want to multiply");
 scanf("%d%d", &a , &b); 

 res =(a,b);
 // function call	
 printf("The product is %d " ,res);
 }
int mul( int x , int y ){ 
int   res; 
res = x*y;
return res;		
}
