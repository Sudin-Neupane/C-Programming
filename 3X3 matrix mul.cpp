// 3*3 matrix mul
#include<stdio.h>
void matrixmul(int ar1[3][3],int ar2[3][3]);
int main(){
	int i,j,k;
	int ar1[3][3],ar2[3][3];
	printf("Enter elements of array 1");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("d",&ar1[i][j]);
		}
	}
	printf("Enter elements of matrix 2");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&ar2[i][j]);
	}
}
matrixmul(ar1,ar2);
}
void matrixmul(int A[3][3],int B[3][3]){
	int i,j,k;
	int result[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		result[i][j]=0;
		for(k=0;k<3;k++){
			result[i][j]=result[i][j]+A[i][k]*B[k][j];
		}	
	}
}
printf("The final result is :\n");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("%d",result[i][j]);
	}
	printf("\n");
}
}
