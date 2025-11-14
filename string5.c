#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50];  // Make sure it's large enough to hold the source string

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);
    return 0;
}