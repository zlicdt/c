#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ires = a / b;
    printf("Integer: %d divided by %d is %d\n", a, b, ires);
    float fa = (float)a, fb = (float)b;
    float fres = fa / fb;
    printf("Float: %d divided by %d is %.2f\n", a, b, fres);
    return 0;
}