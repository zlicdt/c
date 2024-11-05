#include <stdio.h>
#include <math.h>
int main() {
    int input;
    printf("Input a positive integer: ");
    scanf("%d", &input);
    if (input <= 0) {
        printf("Warning! You should input a positive integer!\n");
        return 0;
        // This return statement is used to exit the program if the input is not a positive integer.
    }
    printf("The square root of %d = %f\n", input, sqrt(input));
    printf("The Log10 of %d = %f\n", input, log10(input));
    printf("The natural log of %d = %f\n", input, log(input));
    // The log() function is used to calculate the natural logarithm of a number.
    // The log10() function is used to calculate the base 10 logarithm of a number.
    // The sqrt() function is used to calculate the square root of a number.
    return 0;
}