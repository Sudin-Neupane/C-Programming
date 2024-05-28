// c program for add 2 matrix of 3/3
#include<stdio.h>
int main(){
	int i,j,sum[3][3],a[3][3],b[3][3];
	printf("Enter the elements of first matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("the matrix of (%d ,%d)",i++,j++);
			scanf("%d",a[i][j]);
		}
	}
	printf("Enter the elements of second matrix");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("the matrix of (%d ,%d)",i++,j++);
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
			}
			printf("The sum of the matrix is:");
			for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("/n",sum[i][j]);
		
		}
			}
	
	
	return 0;
}
