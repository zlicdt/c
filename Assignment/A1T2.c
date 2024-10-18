#include <stdio.h>
#include <stdlib.h>
int main() {
    char a, b, c;
    scanf("%c%c%c", &c, &b, &a);
    char reverse[3] = {a, b, c};
    printf("reversed number: %d\n", atoi(reverse));
    return 0;
}