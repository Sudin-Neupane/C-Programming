//Question: Write a program to check whether a character is a vowel or consonant.

#include<stdio.h>

int main(){
char ch;

printf("Enter a character: ");
scanf("%c",&ch);

if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("Vowel");
else
printf("Consonant");

return 0;
}