#include<stdio.h>
enum year{AMD, Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
int main()
{
    int i;
    for (i=Jan; i<=Dec; i++)     
        printf("%d ", i);
    return 0;
    // Just let Jan be the secound element of this enum.
}