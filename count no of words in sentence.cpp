//Write a program to count the number of words in a sentence
#include<stdio.h>

int main(){
char str[200];
int i=0,count=0;

printf("Enter a sentence: ");
fgets(str,sizeof(str),stdin);

while(str[i]!='\0'){
if(str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0'){
count++;
}
i++;
}

if(str[0]!='\0'&&str[0]!='\n')
count++;

printf("Number of words: %d",count);

return 0;
}