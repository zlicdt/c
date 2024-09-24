/*
=============================================
 Name: L4T5ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: HOMOWORK
 ============================================= */
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int ires = a / b;
    printf("Integer: %d divided by %d is %d\n", a, b, ires);
    float fa = (float)a, fb = (float)b;
    float fres = fa / fb;
    printf("Float: %d divided by %d is %.2f\n", a, b, fres);
    return 0;
}