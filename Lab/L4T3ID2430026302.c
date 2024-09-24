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
    printf("temp2= %-7d\ty= %d\n", temp2, y);
    return 0;
}
/* 
Output of
(1)	%7d:    temp1= 1        y= 26
            temp2=       2  y= 26
(2)	%-7d:   temp1= 1        y= 26
            temp2= 2        y= 26
Explanation: 
(1)	difference between temp1 and temp2: temp1 calculate the value of y after plus 1, but temp2 calculate the value of y before plus 1.
(2)	difference between %7d and %-7d: The %7d and %-7d let the output must have 7 character, if not, it will add some space to fill it. %7d is left aligned, and %-7d is right aligned, so the space of %7d will put before the number.
*/
