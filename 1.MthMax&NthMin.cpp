#include <stdio.h>
void swap(int *a, int *b) 
{
int temp = *a;
*a = *b;
*b = temp;
}
void bubbleSort(int arr[], int n) {
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
swap(&arr[j], &arr[j+1]);
}
}
}
}
int main()
{
int m, n;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
}
bubbleSort(arr, n);
printf("Enter the value of M for Mth maximum: ");
scanf("%d", &m);
printf("Enter the value of N for Nth minimum: ");
scanf("%d", &n);
if (m <= 0 || m > sizeof(arr) / sizeof(arr[0]) || n <= 0 || n > sizeof(arr) / sizeof(arr[0])) 
{
printf("Invalid values of M or N\n");
} 
else 
{
printf("%dth maximum element: %d\n", m, arr[n - 1]);
printf("%dth minimum element: %d\n", n, arr[m - 1]);
}
return 0;
}
