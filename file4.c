#include <stdio.h>

int main() {
    FILE *file;
    int roll;
    char name[50];
    char choice;

    // Open the file in append mode
    file = fopen("records.txt", "a");

    if(file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Accept and store records in the file
    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);

        printf("Enter Name: ");
        getchar();  // To consume newline character left by previous scanf
        fgets(name, sizeof(name), stdin);  // Accept name

        // Write the data into the file
        fprintf(file, "%d, %s", roll, name);

        printf("Do you want to enter more records? (y/n): ");
        scanf(" %c", &choice);  // Accept choice to continue or stop
    } while(choice == 'y' || choice == 'Y');

    fclose(file);

    printf("Data stored in file successfully.\n");

    return 0;
}
