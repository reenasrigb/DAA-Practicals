#include <stdio.h>
#include <string.h>
 int main() {
   char input[100];
   printf("Enter a string: ");
   scanf("%s", input);
 
   int length = strlen(input);
 
   printf("Reversed string: ");
   for (int i = length - 1; i >= 0; i--) {
       printf("%c", input[i]);
   }
 
   return 0;
}
