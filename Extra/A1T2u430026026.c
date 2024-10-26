
/*
=============================================
 Name: A1T2u430026026.c
 Author: cheng hao
 Version:1.0
 Copyright: Your copyright notice
 Description: 
 ============================================= */
#include<stdio.h>
int main(){
        int a,b,c,d,m;
        scanf("%d",&m);
        a=m/1%10;//third number
        b=m/10%10;//second number
        c=m/100%10;//first number
        d=a*100+b*10+c;
        printf("reversed number: %d\n",d);
  return 0;
}

//this is my homework