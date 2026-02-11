//Write a program to read a name then print first and last character using function
#include<stdio.h>

void display(char name[]){
int i=0;
while(name[i]!='\0'){
i++;
}
printf("First character: %c\n",name[0]);
printf("Last character: %c",name[i-1]);
}

int main(){
char name[100];
printf("Enter name: ");
scanf("%s",name);
display(name);
return 0;
}
