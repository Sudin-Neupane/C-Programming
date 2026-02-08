//Write a C program using string without using any user defined function to check whether a string is palindrome.
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int i,len,flag=1;
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
len=strlen(str);
for(i=0;i<len/2;i++){
if(str[i]!=str[len-1-i]){
flag=0;
break;
}
}
if(flag)
printf("Palindrome\n");
else
printf("Not Palindrome\n");
return 0;
}