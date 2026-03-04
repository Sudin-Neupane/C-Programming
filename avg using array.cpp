//Question: Write a program to find the average of n numbers using array.

#include<stdio.h>

int main(){
int arr[100],n,i;
float sum=0,avg;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum=sum+arr[i];
}

avg=sum/n;

printf("Average: %.2f",avg);

return 0;
}