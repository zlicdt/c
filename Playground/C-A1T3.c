
/*
=============================================
 Name: A1T3u430026026.c
 Author: cheng hao
 Version:1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include<stdio.h>
int main(){
        float a,c;
        int b;
        printf("Please input amount in Euro:");
        //scanf the number
        scanf("%f",&a);
        printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
        scanf("%d",&b);
        //if b==1 and b==2
        if(b==1)
        {
            c=a*8.1;
            printf("%.2f euro=%.2f HK dollar\n",a,c);
        }
        else if(b==2)
        {
            c=a*7.2;
            printf("%.2f euro=%.2f RMB\n",a,c);
        }
  return 0;
}
//this is my homework