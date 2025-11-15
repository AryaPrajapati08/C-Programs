#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    // Open the file in read mode
    file = fopen("output.txt", "r");

    if(file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read each line of the file using fgets
    while(fgets(line, sizeof(line), file)) {
        printf("%s", line);  // Print the line
    }

    fclose(file);

    return 0;
}
