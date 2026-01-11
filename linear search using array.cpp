// Write a C program to perform linear search on an array
#include<stdio.h>

int main() {
    int n,i,x,a[100],f=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&x);

    for(i=0;i<n;i++) {
        if(a[i]==x) {
            f=1;
            break;
        }
    }

    if(f==1)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
