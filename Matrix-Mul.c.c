// Matrix mul

#include<stdio.h>
int mul(int [3][3], int[3][3] );
int main(){
	
	int A[3][3], B[3][3],mul,i,j;
	printf("ENter elements of matrix A ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("A[%d][%d]",&i,&j);
		}
	}
	printf("ENter elements of matrix B ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("B[%d][%d]",&i,&j);
		}
	}
	mul  = (A , B);
	
	
	
	
	
	
}
int mul(int X[3][3], int Y[3][3]){
	int i , j , mul[3][3];
	printf("the multiplication is :");
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			mul[i][j] = X[i][j]*Y[i][j];
		}
	}
	printf("%d",mul[i][j]);
	
	
	printf("\n");
	
	
}


