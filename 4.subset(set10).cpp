#include <stdio.h>
void generateSubsets(int arr[], int n) {
   for (int i = 0; i < (1 << n); i++) {
       printf("{ ");
       for (int j = 0; j < n; j++) {
           if (i & (1 << j)) {
               printf("%d ", arr[j]);
           }
       }
       printf("}\n");
   }
}
int main() {
   int n;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
int arr[n];
   printf("Enter the elements of the array:\n");
   for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
printf("All possible subsets:\n");
   generateSubsets(arr, n);
 
   return 0;
}
