// check prime or not using function

#include<stdio.h>

int prime(int);

int main(){
    int n, k, i;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        k = prime(i);
        if(k == 1){
            printf("Prime = %d\n", i);
        }
    }
    return 0;
}

int prime(int n){
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

