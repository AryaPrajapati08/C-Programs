#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word

    int len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}