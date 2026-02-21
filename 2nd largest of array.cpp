#include<stdio.h>

int main(){
int arr[100],n,i;
int largest,second;

printf("Enter number of elements: ");
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

largest=second=arr[0];

for(i=1;i<n;i++){
if(arr[i]>largest){
second=largest;
largest=arr[i];
}
else if(arr[i]>second && arr[i]!=largest){
second=arr[i];
}
}

printf("Second largest number: %d",second);

return 0;
}
