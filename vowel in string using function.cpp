//Write a C program using string and user defined function to count vowels in a string.
#include<stdio.h>
#include<string.h>
void countVowels(char str[]){
int i,v=0;
for(i=0;str[i]!='\0';i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v++;
}
printf("Vowels:%d\n",v);
}
int main(){
char str[50];
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
countVowels(str);
return 0;
}
