#include <stdio.h>
int stringLength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    printf("Input a string: ");
    char s[51];
    // Avoid overflow
    fgets(s, 51, stdin);
    // Output the length of the string
    printf("The length of the string is %d.\n", stringLength(s));
    return 0;
}