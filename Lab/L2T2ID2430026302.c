/*
=============================================
 Name: L2T2ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: NO COPYRIGHT
 Description: Homework
 ============================================= */
#include <stdio.h>
int main (){
    short int x, y, z;
    x = 32767;
    y = 3;
    z = x + y;
    printf("%d + %d = %d\n", x, y, x + y); //print x+y
    printf("%d + %d = %d\n", x, y, z); //print z
    return 0;
}

/* 
In the first line, it auto convert to a larger type.
In the second line, short int overflow, output a wrong value.
*/
