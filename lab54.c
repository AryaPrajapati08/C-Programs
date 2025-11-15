#include <stdio.h>

int main() {
    char books[3][50];
    char *ptr[3];
    int i;

    for(i=0;i<3;i++) {
        printf("Enter book name %d: ", i+1);
        scanf(" %[^\n]", books[i]);
        ptr[i] = books[i];
    }

    printf("\nBooks entered:\n");
    for(i=0;i<3;i++)
        printf("%s\n", ptr[i]);

    return 0;
}
