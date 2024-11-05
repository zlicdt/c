#include <stdio.h>
int differenceASCIICode(char c1, char c2) {
    return c1 - c2;
}
int main() {
    char c1, c2;
    printf("Please enter two characters: ");
    scanf("%c %c", &c1, &c2);
    printf("The difference between character '%c' and '%c' is %d.\n", c1, c2, differenceASCIICode(c1, c2));
    return 0;
    // The difference between two characters is calculated by subtracting the ASCII code of the second character from the ASCII code of the first character.
    // The difference between two characters is an integer.
    // Character type can similar to unsigned short int type.
}