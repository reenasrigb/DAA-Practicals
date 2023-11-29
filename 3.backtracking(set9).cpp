#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void permute(int arr[], int start, int end) {
    if (start == end) {
        printArray(arr, end + 1);
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(&arr[i], &arr[start]);
        permute(arr, start + 1, end);
        swap(&arr[i], &arr[start]); 
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All possible permutations of the array:\n");
    permute(arr, 0, size - 1);

    return 0;
}
