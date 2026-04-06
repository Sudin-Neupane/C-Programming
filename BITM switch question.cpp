#include <stdio.h>
#include <string.h>

struct Dress {
    char color[20];
    char size[20];
    float price;
};

int main() {
    struct Dress d[10];
    int n, i, ch, count = 0;
    float x;

    printf("Enter number of dresses: ");
    scanf("%d", &n);

    // Input
    for(i=0;i<n;i++) {
        printf("Enter color, size, price:\n");
        scanf("%s %s %f", d[i].color, d[i].size, &d[i].price);
    }

    do {
        printf("\n1.Replace green->blue\n2.Count medium\n3.Reduce price\n4.Exit\n");
        scanf("%d", &ch);

        switch(ch) {

        // a. Replace green with blue
        case 1:
            for(i=0;i<n;i++) {
                if(strcmp(d[i].color, "green") == 0)
                    strcpy(d[i].color, "blue");
            }
            printf("Updated colors\n");
            break;

        // b. Count medium size
        case 2:
            count = 0;
            for(i=0;i<n;i++) {
                if(strcmp(d[i].size, "medium") == 0)
                    count++;
            }
            printf("Medium size count = %d\n", count);
            break;

        // c. Reduce price
        case 3:
            printf("Enter reduction amount: ");
            scanf("%f", &x);

            for(i=0;i<n;i++) {
                if(d[i].price > 50000)
                    d[i].price -= x;
            }
            printf("Price updated\n");
            break;

        }

    } while(ch != 4);

    return 0;
}
