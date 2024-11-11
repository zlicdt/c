#include <stdio.h>
int factor(int n, int m) {
    if (n % m == 0) return factor(n / m, m) + 1;
    return 0;
}
int main() {
    int n, m;
    printf("Please input n and m: ");
    scanf("%d%d", &n, &m);
    if (!(n > 1)) {
        printf("Warning! value of n is invalid!\n");
        return 0;
    }
    if (!(m > 1)) {
        printf("Warning! value of m is invalid!\n");
        return 0;
    }
    // If input is invalid, print warning and return 0
    printf("There are %d %d\(s\) in %d.\n", factor(n, m), m, n);
    // This mentiond that (s) need have /
    // Use recursive funciton to calculate the number of m in n
    return 0;
}
