#include <stdio.h>
int PowerRec(int m, int n) {
    if (n == 0) return 1;
    n--;
    return m * PowerRec(m, n);
}
int PowerLoop(int m, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= m;
    }
    return res;
}
int main() {
    int m, n;
    printf("Input m and n: ");
    scanf("%d%d", &m, &n);
    if (!(m > 0)) {
        printf("Warning! Input of m is invalid!\n");
        return 0;
    }
    if (!(n >= 0)) {
        printf("Warning! Input of n is invalid!\n");
        return 0;
    }
    // If input is invalid, print warning and return
    printf("Product is %d using recursion.\n", PowerRec(m, n));
    // Use PowerRec to calculate the product by recursing
    printf("Product is %d using loop.\n", PowerLoop(m, n));
    // Use PowerLoop to calculate the product by looping
    return 0;
}
