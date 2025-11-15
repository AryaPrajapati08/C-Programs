#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int lines = 0, words = 0, characters = 0, spaces = 0;
    int inWord = 0;

    // Open the file in read mode
    file = fopen("sample.txt", "r");

    if(file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the file character by character
    while((ch = fgetc(file)) != EOF) {
        characters++;

        if(ch == '\n') {
            lines++;
        }

        if(ch == ' ' || ch == '\t') {
            spaces++;
        }

        if(isalpha(ch) || isdigit(ch)) {
            if(!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    fclose(file);

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
    printf("Spaces: %d\n", spaces);

    return 0;
}
