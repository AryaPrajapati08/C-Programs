#include <stdio.h>

void printName5(int count) {
    if(count > 5)
        return;
    printf("Your Name\n");  // Replace "Your Name" with your actual name if you want
    printName5(count + 1);
}

int main() {
    printName5(1);
    return 0;
}
