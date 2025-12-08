#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[5];  // can store 5 students
    int n, i;
    float total = 0;

    printf("Enter number of students (max 5): ");
    scanf("%d", &n);

    if (n > 5 || n <= 0) {
        printf("Invalid number of students.\n");
        return 0;
    }

    // Input details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        total += students[i].marks;
    }

    // Display all students
    printf("\n----- Student Details -----\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("Age  : %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Display average marks
    printf("\nAverage Marks = %.2f\n", total / n);

    return 0;
}
