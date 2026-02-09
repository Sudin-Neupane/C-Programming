//Write a C program using string without using any user defined function to find frequency of a character in a string.
#include<stdio.h>
#include<string.h>
int main(){
char str[100],ch;
int i,count=0;
printf("Enter a string:");
fgets(str,100,stdin);
str[strcspn(str,"\n")]=0;
printf("Enter a character:");
scanf("%c",&ch);
for(i=0;str[i]!='\0';i++){
if(str[i]==ch)
count++;
}
printf("Frequency:%d\n",count);
return 0;
}
