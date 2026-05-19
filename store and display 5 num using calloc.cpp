
// C program to store and display 5 numbers using calloc 
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,i;
ptr = (int*)calloc(5,sizeof(int));
printf("Enter 5 numbers:\n");
for(i=0;i<5;i++){

scanf("%d",&ptr[i]);
}
printf("Entered numbers are:\n");

for(i=0;i<5;i++){
printf("%d ",ptr[i]);
}

free(ptr);

return 0;
}
