#include<stdio.h>
int main()
{
int r,c,i,j,sum=0;
float avg;
printf("Enter number of rows and columns:");
scanf("%d%d",&r,&c);
int a[r][c];
printf("Enter matrix elements:\n");
for(i=0;i<r;i++){
for(j=0;j<c;j++){
scanf("%d",&a[i][j]);
sum+=a[i][j];
}
}
avg=(float)sum/(r*c);
printf("Sum=%d\nAverage=%.2f",sum,avg);
return 0;
}

