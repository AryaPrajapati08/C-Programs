#include <stdio.h>

void printNameN(int count, int n) {
    if(count > n)
        return;
    printf("Your Name\n");  // Replace "Your Name" with your actual name
    printNameN(count + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printNameN(1, n);
    return 0;
}
