#include <stdio.h>
#include "digit.h"
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("%d\n", isDigitChar(c));
    return 0;
}
