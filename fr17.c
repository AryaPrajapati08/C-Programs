#include <stdio.h>

void countBG(int count, int *boys, int *girls) {
    if(count == 50)
        return;

    char s;
    printf("Enter sex (M/F) for student %d: ", count + 1);
    scanf(" %c", &s);

    if(s == 'M' || s == 'm') (*boys)++;
    else if(s == 'F' || s == 'f') (*girls)++;

    countBG(count + 1, boys, girls);
}

int main() {
    int boys = 0, girls = 0;
    countBG(0, &boys, &girls);
    printf("Boys = %d\nGirls = %d\n", boys, girls);
    return 0;
}
