#include <stdio.h>
typedef struct {
    int weight;
    int value;
} Item;
 void swap(Item* a, Item* b) {
    Item temp = *a;
    *a = *b;
    *b = temp;
}
void sortItems(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            double ratio1 = (double)items[j].value / items[j].weight;
            double ratio2 = (double)items[j + 1].value / items[j + 1].weight;
            if (ratio1 < ratio2) {
                swap(&items[j], &items[j + 1]);
            }
        }
    }
}

double knapsackGreedy(Item items[], int n, int capacity) {
    double totalValue = 0.0;
    sortItems(items, n);

    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            totalValue += items[i].value;
            capacity -= items[i].weight;
        } else {
            totalValue += (double)items[i].value / items[i].weight * capacity;
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, capacity;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    Item items[n];
    for (int i = 0; i < n; i++) {
        printf("Enter weight and value for item %d: ", i + 1);
        scanf("%d %d", &items[i].weight, &items[i].value);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    double maxValue = knapsackGreedy(items, n, capacity);
    printf("Maximum value that can be obtained: %.2lf\n", maxValue);

    return 0;
}
