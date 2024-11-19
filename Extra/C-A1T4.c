/*
=============================================
 Name: A1T4u430026026.c
 Author: cheng hao
 Version:1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include <stdio.h>
int main() {
    char o[3];
    char a, b;
    char a_c, b_c;
    printf("Input: ");
    scanf("%c%*c%c", &a, &b);
    if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')) {
        if((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')) {
            if((a >= 'a' && a <= 'z')) a_c = a - 32;
            if((b >= 'a' && b <= 'z')) b_c = b - 32;
            if(a_c >= b_c) printf("Output: %c %c\n", a, b);
            if(a_c < b_c) printf("Output: %c %c\n", b, a);
        } else {
            printf("Warning! '%c' is not an English letter.\n", b);
            return 0;
        }
    } else {
        printf("Warning! '%c' is not an English letter.\n", a);
        return 0;
    }
    
}
//this is my homework
//this is my homework
//this is my homework
