# include <stdio.h>
#include <limits.h>
int sumOfFrequencies(int freq[], int i, int j) {
   int sum = 0;
   for (int k = i; k <= j; k++)
       sum += freq[k];
   return sum;
}
int optimalBSTCost(int keys[], int freq[], int n) {
   int cost[n+1][n+1];
for (int i = 0; i <= n; i++)
       cost[i][i] = freq[i];
for (int length = 2; length <= n; length++) {
       for (int i = 0; i <= n - length + 1; i++) {
           int j = i + length - 1;
           cost[i][j] = INT_MAX;
 
           for (int r = i; r <= j; r++) {
               int tempCost = ((r > i) ? cost[i][r-1] : 0) +
                              ((r < j) ? cost[r+1][j] : 0) +
                              sumOfFrequencies(freq, i, j);
               
               if (tempCost < cost[i][j])
                   cost[i][j] = tempCost;
           }
       }
   }
return cost[0][n-1];
}
int main() {
   int n;
   printf("Enter the number of keys: ");
   scanf("%d", &n);
int keys[n];
   int freq[n];
   printf("Enter the keys and their frequencies:\n");
   for (int i = 0; i < n; i++)
       scanf("%d %d", &keys[i], &freq[i]);
int minCost = optimalBSTCost(keys, freq, n);
printf("Minimum cost of optimal binary search tree: %d\n", minCost);
return 0;
}
