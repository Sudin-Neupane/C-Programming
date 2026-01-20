// 8. if x>y , checkk pallindrome , else check prime 

#include<stdio.h>
int main()
{
    int x,y,num,temp,rev=0, digit, i, a= 0;

    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);

    printf("Enter a number: ");
    scanf("%d",&num);

    if(x>y) 
	{
    
    
    // FOr pallindrome 
        temp=num;
        rev=0;
        while(temp>0){
            digit=temp % 10;
            rev=rev* 10 +digit;
            temp=temp/10;
        }
        if(rev==num) {
            printf("%d is a palindrome",num);
        } 
		else
		 {
            printf("%d is not a palindrome",num);
        }
    } 
	else 
	{
        // For  prime
        if(num<=1) 
		{
            printf("%d is not prime",num);
        } 
		else 
		{
            a=0; 
            for(i=2;i<=num/2; i++) {
                if(num%i==0) {
                    a=1;
                    break;
                }
            }
            if(a==0) {
                printf("%d is a prime number", num);
            } else {
                printf("%d is not a prime number", num);
            }
        }
    }

    return 0;
}
