/*
=============================================
 Name: L4T6ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: HOMOWORK
 ============================================= */
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    while (a > b)
    {
        printf("The bigger number is %d\n", a);
        return 0;
    }
    printf("The bigger number is %d\n", b);
    return 0;
}