#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float m1, m2, m3, avg;
};

int main() {
    struct Student s[10];
    int i;

    for(i=0;i<10;i++) {
        printf("Enter name, roll, marks:\n");
        scanf("%s %d %f %f %f", s[i].name, &s[i].roll,
              &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }

    printf("\nStudent Details:\n");
    for(i=0;i<10;i++) {
        printf("%s %d Avg=%.2f\n",
               s[i].name, s[i].roll, s[i].avg);
    }

    return 0;
}
