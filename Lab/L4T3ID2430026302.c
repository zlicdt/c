/*
=============================================
 Name: L4T3ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: HOMOWORK
 ============================================= */
#include <stdio.h>
int main (){
    int x = 50, y = 25;
    int temp1, temp2;
    temp1 = x/++y;
    printf("temp1= %d\ty= %d\n", temp1, y);
    y=25;
    temp2 = x/y++;
    printf("temp2= %7d\ty= %d\n", temp2, y);
    return 0;
}
/* 
Output of
(1)	%7d: 26
(2)	%-7d: 
Explanation: 
(1)	difference between temp1 and temp2:
(2)	difference between %7d and %-7d:
*/
