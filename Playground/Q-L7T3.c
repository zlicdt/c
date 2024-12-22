/*
=============================================
 Name: L7T3N243002669.c
 Author: Tristan Qi
 Version:1.0.0
 Copyright: Your copyright notice
 Description: L7 PG.
 ============================================= */
#include<stdio.h>
int main(){
    int in = 0,total;
    printf("Input the total number of letters: ");
    scanf("%d",&total);
    if(total<=0){
        printf("Warning! Total number should be a positive integer!\n");
        return 0;
    }//judge if the total number is positive
    printf("Input %d ASCII codes: ", total);
    char str[total];
    for(int i=0;i<total;i++){//read in the input value
        scanf("%d", &in);
        if(!((in >= 'A' && in <= 'Z') || (in >= 'a' && in <= 'z'))) {//judge if it is valid ascii code
            printf("Warning! Invalid ASCII code.\n");
            return 0;
        }
        str[i]=in;
    }
    printf("%s\n",str);//print out the final result
    return 0;
}