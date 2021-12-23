#include <stdio.h>
int main() {
   int i, s, r, k = 0, c = 0, c1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = 1; i <= r; ++i) {
      for (s = 1; s <= r - i; ++s) {
         printf("  ");
         ++c;
      }
      while (k != 2 * i - 1) {
         if (c <= r - 1) {
            printf("%d ", i + k);
            ++c;
         } else {
            ++c1;
            printf("%d ", (i + k - 2 * c1));
         }
         ++k;
      }
      c1 = c = k = 0;
      printf("\n");
   }
   return 0;
}
/*
output:
Enter the number of rows: 5
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
