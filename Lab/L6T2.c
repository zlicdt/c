#include <stdio.h>
int calc_even(int input)
{
    int ret = 0;
    for (int i = 2; i <= input; i += 2)
    {
        ret += i;
    }
    return ret;
}
int calc_odd(int input)
{
    int ret = 0;
    for (int i = 1; i <= input; i += 2)
    {
        ret += i;
    }
    return ret;
}
int main()
{
    int n;
    printf("Input an integer: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }
    int sum_even = calc_even(n);
    int sum_odd = calc_odd(n);
    int diff = sum_even - sum_odd;
    printf("sum_even is %d, sum_odd is %d, diff is %d.\n", sum_even, sum_odd, diff);
    return 0;
}