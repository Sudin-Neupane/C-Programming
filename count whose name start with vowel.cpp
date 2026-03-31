//Question: Write a program using structure and pointer to count employees whose names start with a vowel.

#include<stdio.h>

struct Employee{
int id;
char name[50];
float salary;
};

int isVowel(char ch){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
return 1;
else
return 0;
}

int main(){
struct Employee e[5];
struct Employee *ptr;
int i,count=0;

ptr = e;

for(i=0;i<5;i++){
printf("Enter id, name and salary of employee %d: ",i+1);
scanf("%d %s %f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->salary);
}

for(i=0;i<5;i++){
if(isVowel((ptr+i)->name[0])){
count++;
}
}

printf("\nNumber of employees whose names start with vowel: %d",count);

return 0;
}
