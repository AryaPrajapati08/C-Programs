#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char sex;
    for(i = 1; i <= 50; i++) {
        printf("Enter sex of student %d (M/F): ", i);
        scanf(" %c", &sex);  // space before %c to consume newline
        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
    }
    printf("Boys = %d\n", boys);
    printf("Girls = %d\n", girls);
    return 0;
}
