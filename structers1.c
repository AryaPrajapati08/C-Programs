#include <stdio.h>
#include <string.h>

#define SIZE 10  // Number of students

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    char courseName[50];
    char majorSubject[50];
    char minorSubject[50];
};

// Function to print names of all students
void printAllNames(struct Student s[], int n) {
    int i;
    printf("\nList of Students:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, s[i].name);
    }
}

// Function to print details of a student by roll number
void printStudentByRoll(struct Student s[], int n, int roll) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (s[i].rollNumber == roll) {
            printf("\n--- Student Details ---\n");
            printf("Roll Number : %d\n", s[i].rollNumber);
            printf("Name        : %s\n", s[i].name);
            printf("Course Name : %s\n", s[i].courseName);
            printf("Major       : %s\n", s[i].majorSubject);
            printf("Minor       : %s\n", s[i].minorSubject);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with Roll Number %d not found.\n", roll);
    }
}

int main() {
    struct Student students[SIZE];
    int i, rollSearch;

    printf("Enter data for %d students:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        getchar();  // clear newline left by scanf

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';  // remove newline

        printf("Enter Course Name: ");
        fgets(students[i].courseName, sizeof(students[i].courseName), stdin);
        students[i].courseName[strcspn(students[i].courseName, "\n")] = '\0';

        printf("Enter Major Subject: ");
        fgets(students[i].majorSubject, sizeof(students[i].majorSubject), stdin);
        students[i].majorSubject[strcspn(students[i].majorSubject, "\n")] = '\0';

        printf("Enter Minor Subject: ");
        fgets(students[i].minorSubject, sizeof(students[i].minorSubject), stdin);
        students[i].minorSubject[strcspn(students[i].minorSubject, "\n")] = '\0';
    }

    // (a) Print names of all students
    printAllNames(students, SIZE);

    // (b) Print data of a student by roll number
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &rollSearch);

    printStudentByRoll(students, SIZE, rollSearch);

    return 0;
}
