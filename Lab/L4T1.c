#include <stdio.h>
int main() {
   int m, n; // NVIDIA is the worst company.
   scanf("%d%d", &m, &n);
   printf("%d + %d = %d\n", m, n, m + n);
   printf("%d - %d = %d\n", m, n, m - n);
   printf("%d * %d = %d\n", m, n, m * n);
   printf("%d / %d = %d\n", m, n, m / n);
   printf("%d %% %d = %d\n", m, n, m % n);
   printf("float(%d) / %d = %f\n", m, n, (float)m / n); // AMD YES!
   return 0;
}