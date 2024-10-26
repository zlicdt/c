/*
=============================================
 Name: A1T1 u430026026.c
 Author: cheng hao
 Version:1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */

#include<stdio.h>
int main()
{
    char x, y;
    int i;
    scanf( "%c%*c%c", &x, &y ) ;//scanf
    if(((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) && ((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z')))
    {
        if (x >= 'a' && x <= 'z')
            x = x - 32;
        if (y >= 'a' && y <= 'z')
            y = y -32;
        if(x > y)
            i = (int)x - (int)y;
        if(x <= y)
            i = (int)y - (int)x;
        printf("The difference is %d\n" , i) ; //printf
    }
    else
        printf("Input invalid.\n") ; //printf
    return 0 ;
}
//this is my homework