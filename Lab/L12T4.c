#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int sum = 0;
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    // Use atoi function in stdlib to convert string to int
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    // Calculate the sum
    printf("The sum is %d\n", sum);
    // And output..
    return 0;
}