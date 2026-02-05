//Write a C program to read a string from the user,display the string,and find its length using string functions.
#include<stdio.h>
#include<string.h>
int main(){
char name[50];
printf("Enter your name:");
fgets(name,50,stdin);
name[strcspn(name,"\n")]=0;
printf("Your name is:%s\n",name);
printf("Length:%lu\n",strlen(name));
return 0;
}