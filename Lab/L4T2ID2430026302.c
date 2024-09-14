/*
=============================================
 Name: L4T2ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: N
 ============================================= */
#include <stdio.h>
#define square(a, b) (a * a) + (b * b);
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int square_sum = square(a, b); // Run marcro
    printf("Square sum is %d\n", square_sum);
    return 0;
}