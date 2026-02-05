//Write a C program using string and switch statement to count vowels,consonants,or digits in a string.
#include<stdio.h>
#include<string.h>
int main(){
char str[50];
int ch,i,v=0,c=0,d=0;
printf("Enter a string:");
fgets(str,50,stdin);
str[strcspn(str,"\n")]=0;
printf("1.Count vowels\n2.Count consonants\n3.Count digits\nEnter choice:");
scanf("%d",&ch);
switch(ch){
case 1:
for(i=0;str[i]!='\0';i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
v++;
}
printf("Vowels:%d\n",v);
break;
case 2:
for(i=0;str[i]!='\0';i++){
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
if(!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'))
c++;
}
}
printf("Consonants:%d\n",c);
break;
case 3:
for(i=0;str[i]!='\0';i++){
if(str[i]>='0'&&str[i]<='9')
d++;
}
printf("Digits:%d\n",d);
break;
default:
printf("Invalid choice\n");
}
return 0;
}