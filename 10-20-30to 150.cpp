//10. 
/*
10
20     30
40     50     60
70     80     90     100
110    120    130    140    150

*/

#include<stdio.h>
int main()
{
    int i,j,n=5,count=10;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",count);
            count+=10;
        }
        printf("\n");
    }
    return 0;
}

