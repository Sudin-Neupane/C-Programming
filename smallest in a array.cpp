//Question: Write a program to find the smallest number in an array.

#include<stdio.h>

int main(){
int arr[100],n,i,small;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

small=arr[0];

for(i=1;i<n;i++){
if(arr[i]<small)
small=arr[i];
}

printf("Smallest number: %d",small);

return 0;
}