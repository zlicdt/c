#include<stdio.h>

int stringLength(char s[]) ;

//mainfuction
int main(){
    int x = 0;
    char s[51] ;
    printf ("Input a string: ") ;
    //input
    scanf ("%s", s) ;
    x = stringLength(s) ;
    //output
    printf ("The length of the string is %d.\n", x) ;
  return 0;
}

//subfuction
int stringLength(char s[]) 
{
    int c = 0;
    for (int i = 0; i <= 50; i++)
    {
        if (s[i] != '\0')
            c++ ;
        else
            break ;
    }
    return c ;
}