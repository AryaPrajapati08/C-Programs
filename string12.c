#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int j = 0; str[j] != '\0'; j++) {
        char ch = tolower(str[j]);  // Convert to lowercase for uniform comparison
        switch (ch) {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("Vowel frequencies:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}