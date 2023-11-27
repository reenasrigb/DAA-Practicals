#include <stdio.h>
#define MAX 100
void printSubset(int subset[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", subset[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}
void subsetSum(int set[], int n, int targetSum, int subset[], int size, int index, int currentSum) {
    if (currentSum == targetSum) {
        printSubset(subset, size);
    }
    for (int i = index; i < n; i++) {
        subset[size] = set[i];
        subsetSum(set, n, targetSum, subset, size + 1, i + 1, currentSum + set[i]);
    }
}
int main() {
    int n, targetSum;
printf("Enter the size of the set: ");
    scanf("%d", &n);
int set[MAX];
    printf("Enter the set elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
printf("Enter the target sum: ");
    scanf("%d", &targetSum);
 int subset[MAX];
printf("Subsets with sum %d:\n", targetSum);
    subsetSum(set, n, targetSum, subset, 0, 0, 0);

    return 0;
}
