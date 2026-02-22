//Write a program to sort elements of an array in ascending order using Bubble Sort

#include<stdio.h>

int main(){
int arr[100],n,i,j,temp;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++){
for(j=0;j<n-1-i;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}

printf("Sorted array:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}

return 0;
}
