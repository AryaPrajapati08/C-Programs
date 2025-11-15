#include <stdio.h>
#include <string.h>

int main() {
    char name[100], word[20], last[20];
    int i = 0, j = 0, k = 0, wc = 0;

    printf("Enter full name: ");
    scanf("%[^\n]", name);

    while(name[i] != '\0') {
        if(name[i] != ' ') {
            word[j++] = name[i];
        } else {
            word[j] = '\0';
            if(wc == 0 || name[i+1] != '\0') printf("%c. ", word[0]);
            wc++;
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    strcpy(last, word);

    printf("%s\n", last);

    return 0;
}
