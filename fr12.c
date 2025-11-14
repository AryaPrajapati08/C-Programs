#include <stdio.h>

int sumDiv13(int start, int end) {
    if(start > end)
        return 0;
    if(start % 13 == 0)
        return start + sumDiv13(start + 1, end);
    else
        return sumDiv13(start + 1, end);
}

int main() {
    int sum = sumDiv13(1, 100);
    printf("Sum of all numbers divisible by 13 between 1 and 100 = %d\n", sum);
    return 0;
}
