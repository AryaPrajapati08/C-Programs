#include <stdio.h>

// Function to swap two integers using call by value
void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside swap function: a = %d, b = %d", a, b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore calling swap function: x = %d, y = %d", x, y);

    // Call the function using call by value
    swap(x, y);

    printf("\nAfter calling swap function: x = %d, y = %d\n", x, y);

    return 0;
}
