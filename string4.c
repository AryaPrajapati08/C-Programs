#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "HeLLo WoRLd!";
    int i = 0;

    while (str[i]) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("Toggle case string: %s\n", str);
    return 0;
}