#include <stdio.h>

void countNums(int count, int *pos, int *neg, int *zero) {
    if(count == 200)
        return;

    int x;
    printf("Enter number %d: ", count + 1);
    scanf("%d", &x);

    if(x > 0) (*pos)++;
    else if(x < 0) (*neg)++;
    else (*zero)++;

    countNums(count + 1, pos, neg, zero);
}

int main() {
    int pos = 0, neg = 0, zero = 0;
    countNums(0, &pos, &neg, &zero);

    printf("Positive = %d\nNegative = %d\nZeroes = %d\n", pos, neg, zero);
    return 0;
}
