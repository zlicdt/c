#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (a > b)
    {
        printf("The bigger number is %d\n", a);
        return 0;
    }
    printf("The bigger number is %d\n", b);
    return 0;
}