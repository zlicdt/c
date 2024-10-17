#include <stdio.h>
int main()
{
    int percentage, x;
    char ch1, ch2;
    scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
    printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0 * x * percentage / 100);
    return 0;
}
/*
Put outputs and explanations here.
1. 10of100: 10% of 100 is 10.000000
2. 10 of100: 10%  o 1 is 0.100000
3. 10 of 100: 10%  o 1 is 0.100000
*/
