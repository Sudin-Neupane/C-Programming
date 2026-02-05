//Write a C program using string and switch statement to perform operations:1.Display string 2.Find length 3.Reverse string
#include<stdio.h>
#include<string.h>
int main(){
char str[50],rev[50];
int ch,i,len;
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
len=strlen(str);
printf("1.Display\n2.Length\n3.Reverse\nEnter choice:");
scanf("%d",&ch);
switch(ch){
case 1:
printf("String:%s\n",str);
break;
case 2:
printf("Length:%d\n",len);
break;
case 3:
for(i=0;i<len;i++){
rev[i]=str[len-1-i];
}
rev[len]='\0';
printf("Reverse:%s\n",rev);
break;
default:
printf("Invalid choice\n");
}
return 0;
}