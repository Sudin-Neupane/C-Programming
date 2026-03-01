//Question: Write a program to remove duplicate elements from an array.

#include<stdio.h>

int main(){
int arr[100],n,i,j,k;

printf("Enter number of elements: ");
scanf("%d",&n);

printf("Enter elements:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
for(j=i+1;j<n;){
if(arr[i]==arr[j]){
for(k=j;k<n-1;k++){
arr[k]=arr[k+1];
}
n--;
}
else{
j++;
}
}
}

printf("Array after removing duplicates:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}

return 0;
}