#include <stdio.h>

int main() {
    int num, original, sum = 0, rem;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        rem = num % 10;          // get the last digitt
        sum = sum + (rem * rem * rem);  // add the cube ....
        num = num / 10;          //  it removes last numner
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
