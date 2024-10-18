#include <stdio.h>
#include <ctype.h>
int main() {
    char a, b;
    int diff;
    scanf("%c%*c%c", &a, &b);
    if (isalpha(a) && isalpha(b)) {
        if (islower(a)) a -= 32;
        if (islower(b)) b -= 32;
        diff = a - b;
        if (diff < 0) diff = 0 - diff;
        printf("The difference is %d\n", diff);
        return 0;
    }
    printf("Input invalid.\n");
    return 0;
}