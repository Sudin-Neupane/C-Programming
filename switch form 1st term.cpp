#include <stdio.h>

int main() {
    int choice, i, n, x, num, sum = 0, count = 0;

    printf("1. Table of 8\n2. Divisible numbers\n3. Sum and Average\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter n: ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++) {
                printf("8 x %d = %d\n", i, 8 * i);
            }
            break;

        case 2:
            printf("Enter n and x: ");
            scanf("%d%d", &n, &x);
            for (i = n; i >= 1; i--) {
                if (i % x == 0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
            break;

        case 3:
            do {
                printf("Enter number (0 to stop): ");
                scanf("%d", &num);
                sum += num;
                if (num != 0) {
                    count++;
                }
            } while (num != 0);

            if (count != 0) {
                printf("Sum = %d\n", sum);
                printf("Average = %.2f\n", (float)sum / count);
            } else {
                printf("No numbers entered\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
