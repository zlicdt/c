#include <stdio.h>
int sumAll(int maxNum) {
    if (maxNum == 1) return 1;
    return maxNum + sumAll(maxNum - 1);
}
int main() {
    int maxNum;
    printf("Input maxNum: ");
    scanf("%d", &maxNum);
    if (maxNum < 1) {
        printf("Warning! Input of maxNum is invalid!\n");
        return 0;
    }
    // We have to use maxNum variable to store the value of input
    // Use sumAll function to calculate the sum of all numbers from 1 to maxNum
    // Output the result
    printf("Sum is %d.\n", sumAll(maxNum));
}
