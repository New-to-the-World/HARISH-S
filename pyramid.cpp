#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      while (k != 1 * i ) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
