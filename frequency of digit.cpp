//Question: Write a program to find the frequency of each digit in a given number.

#include<stdio.h>

int main(){
long long num;
int freq[10]={0};
int rem;

printf("Enter a number: ");
scanf("%lld",&num);

while(num!=0){
rem=num%10;
freq[rem]++;
num=num/10;
}

printf("Digit Frequency:\n");
for(int i=0;i<10;i++){
if(freq[i]!=0)
printf("%d occurs %d times\n",i,freq[i]);
}

return 0;
}