// Count vowel and consunants
#include<stdio.h>

int main(){
char str[100];
int i=0,vowels=0,consonants=0;

printf("Enter a string: ");
scanf("%s",str);

while(str[i]!='\0'){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
vowels++;
}
else{
consonants++;
}
i++;
}

printf("Vowels: %d\n",vowels);
printf("Consonants: %d",consonants);

return 0;
}
