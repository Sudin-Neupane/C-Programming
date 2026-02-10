//Write a program to read a list of names and print first and last character
#include<stdio.h>
#include<string.h>

int main(){
char name[50];
int n,i,len;
printf("Enter number of names: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter name: ");
scanf("%s",name);
len=strlen(name);
printf("First: %c Last: %c\n",name[0],name[len-1]);
}
return 0;
}
