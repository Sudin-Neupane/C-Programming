//Write a C program using string and user defined function to find the length of a string.
#include<stdio.h>
#include<string.h>
void findLength(char str[]){
printf("Length:%lu\n",strlen(str));
}
int main(){
char str[50];
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
findLength(str);
return 0;
}