#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello, World!";
    int i = 0;

    while (str[i]) {
        str[i] = tolower(str[i]);
        i++;
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}