#include <stdio.h>

struct cricketer {
    char name[50];
    int age;
    int tests;
    float avg;
};

int main() {
    struct cricketer c[10], temp;
    int i, j;

    printf("Enter records for 10 cricketers:\n\n");

    for(i=0; i<10; i++) {
        printf("Cricketer %d:\n", i+1);

        printf("Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Age: ");
        scanf("%d", &c[i].age);

        printf("Number of test matches played: ");
        scanf("%d", &c[i].tests);

        printf("Average runs per test match: ");
        scanf("%f", &c[i].avg);

        printf("\n");
    }

    // Sorting in ascending order of average runs
    for(i=0; i<10; i++) {
        for(j=i+1; j<10; j++) {
            if(c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\n--- Cricketers Sorted by Average Runs (Ascending) ---\n");

    for(i=0; i<10; i++) {
        printf("\nCricketer %d:\n", i+1);
        printf("Name: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("Matches: %d\n", c[i].tests);
        printf("Average Runs: %.2f\n", c[i].avg);
    }

    return 0;
}
