/*
=============================================
 Name: L3T4ID2430026302.c
 Author: ZHU Haoming
 Version: 1
 Copyright: Your copyright notice
 Description: N
 ============================================= */
 #include <stdio.h>
 int main() {
    int i;
    float j;
    char ch;
    // float f;
    scanf("%d%f %c", &i, &j, &ch);
    printf("%d is the ASCII code of '%c'.\n", ch, ch);
    printf("The value of i is %d.\n", i);
    printf("The value of j is %.1f.\n", j);
    return 0;
}
