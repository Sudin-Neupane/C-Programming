//Write a C program using string and user defined function to reverse a string.
#include<stdio.h>
#include<string.h>
void reverseString(char str[]){
int i,len=strlen(str);
char rev[50];
for(i=0;i<len;i++){
rev[i]=str[len-1-i];
}
rev[len]='\0';
printf("Reverse:%s\n",rev);
}
int main(){
char str[50];
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
reverseString(str);
return 0;
}
