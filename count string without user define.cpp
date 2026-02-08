//Write a C program using string without using any user defined function to count words in a string.
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,words=0;
printf("Enter a string:");
fgets(str,100,stdin);
str[strcspn(str,"\n")]=0;
for(i=0;str[i]!='\0';i++){
if((i==0&&str[i]!=' ')||(str[i]!=' '&&str[i-1]==' '))
words++;
}
printf("Words:%d\n",words);
return 0;
}