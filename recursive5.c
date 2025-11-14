#include <stdio.h>

// Function to find max and min using call by reference
void findMaxMin(int arr[], int size, int *max, int *min) {
    int i;

    // Initialize both to the first element
    *max = *min = arr[0];

    // Traverse the array to update max and min
    for (i = 1; i < size; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[100], n, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call function using call by reference
    findMaxMin(arr, n, &max, &min);

    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);

    return 0;
}
