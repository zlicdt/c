/*
=============================================
 Name: L4T1ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: F
 ============================================= */
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