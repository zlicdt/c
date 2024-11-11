#include <stdio.h>
int f(int n) {
    if (n == 1) return 1;
    return (n * n) + f(n - 1);
}
int main() {
    int input;
    printf("Input a positive integer (>=1): ");
    scanf("%d", &input);
    if (!input >= 1) {
        printf("Warning! A positive integer no smaller than 1 should be input.\n");
        return 0;
        // If input is smaller than 1 then stop
    }
    printf("Sum is %d when n is %d.\n", f(input), input);
    // use recursive function to calculate
    // Recursive function return n * n + NEXT_GENERATION
    return 0;
}
