#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    
    for(int i = 1; i < size; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[5], max, min, size = 5;

    printf("Enter 5 integers:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, size, &max, &min);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
