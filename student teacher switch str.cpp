#include <stdio.h>
#include <string.h>

struct Teacher {
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Teacher t[10], temp;
    int n, i, j, ch;

    printf("Enter number of teachers: ");
    scanf("%d", &n);

    // Input
    for(i=0;i<n;i++) {
        printf("Enter name, department, salary:\n");
        scanf("%s %s %f", t[i].name, t[i].department, &t[i].salary);
    }

    do {
        printf("\n1.Display\n2.Save All\n3.Sort by Name\n4.Save Salary >50000\n5.Exit\n");
        scanf("%d", &ch);

        switch(ch) {

        // i. Display all
        case 1:
            for(i=0;i<n;i++)
                printf("%s %s %.2f\n", t[i].name, t[i].department, t[i].salary);
            break;

        // ii. Save all in abc.txt
        case 2: {
            FILE *fp = fopen("abc.txt", "w");
            for(i=0;i<n;i++)
                fprintf(fp, "%s %s %.2f\n", t[i].name, t[i].department, t[i].salary);
            fclose(fp);
            printf("Saved to abc.txt\n");
            break;
        }

        // iii. Sort by name
        case 3:
            for(i=0;i<n-1;i++) {
                for(j=i+1;j<n;j++) {
                    if(strcmp(t[i].name, t[j].name) > 0) {
                        temp = t[i];
                        t[i] = t[j];
                        t[j] = temp;
                    }
                }
            }
            printf("Sorted by name\n");
            break;

        // iv. Save salary > 50000
        case 4: {
            FILE *fp = fopen("greater.txt", "w");
            for(i=0;i<n;i++) {
                if(t[i].salary > 50000)
                    fprintf(fp, "%s %s %.2f\n", t[i].name, t[i].department, t[i].salary);
            }
            fclose(fp);
            printf("Saved to greater.txt\n");
            break;
        }

        }

    } while(ch != 5);

    return 0;
}
