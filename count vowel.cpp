//Write a C program using string  to count vowels in a string.
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int i,v=0;
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
for(i=0;str[i]!='\0';i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v++;
}
printf("Vowels:%d\n",v);
return 0;
}
