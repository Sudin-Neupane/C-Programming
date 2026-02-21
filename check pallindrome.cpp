#include<stdio.h>

int main(){
char str[100];
int i=0,j=0,flag=0;

printf("Enter a string: ");
scanf("%s",str);

while(str[j]!='\0'){
j++;
}
j=j-1;

while(i<j){
if(str[i]!=str[j]){
flag=1;
break;
}
i++;
j--;
}

if(flag==0)
printf("Palindrome");
else
printf("Not Palindrome");

return 0;
}
