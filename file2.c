#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    // Open file in write mode
    file = fopen("output.txt", "a");

    if(file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    printf("Enter a line to write into the file (Ctrl+D to end):\n");

    // Accepting multiple lines from user and writing them into the file
    while(1) {
        gets(line);  // get a line from the user
        if(feof(stdin)) break;  // Stop if end of input (Ctrl+D) is reached
        fputs(line, file);      // Write the line to the file
        fputs("\n", file);      // Add a newline after each line
    }

    fclose(file);
    printf("Data written to file successfully.\n");

    return 0;
}
