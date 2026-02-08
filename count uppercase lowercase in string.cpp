//Write a C program using string without using any user defined function to count uppercase and lowercase letters.
#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,uc=0,lc=0;
printf("Enter a string:");
fgets(str,100,stdin);
str[strcspn(str,"\n")]=0;
for(i=0;str[i]!='\0';i++){
if(str[i]>='A'&&str[i]<='Z')
uc++;
else if(str[i]>='a'&&str[i]<='z')
lc++;
}
printf("Uppercase:%d\n",uc);
printf("Lowercase:%d\n",lc);
return 0;
}