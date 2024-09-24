/*
=============================================
 Name: L4T4ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: HOMOWORK
 ============================================= */
#include <stdio.h>
int main() {
    int i = 10, j = 5;
    float x = 5.0, y;
    // y = x / i; 
    // y = j / i;
    y = (float)j / i;
    printf("%f\n", y);
    return 0;
}
/*
A: 0.500000 
    x and y are float type number, i is a integer number. While x / i, the result is also float. 
B: 0.000000
    y is a float type number, j and i are integer number. While j / i, the result is also integer, so it will be zero.
C: 0.500000
    y is a float type number, j and i are integer number. While (float)j, j is convert to float type, so the result should be a float type value. It can be 0.5
*/