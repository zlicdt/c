#include <stdio.h>
int main() {
    int i;
    float j;
    char ch;
    // float f;
    scanf("%d%f %c", &i, &j, &ch);
    printf("%d is the ASCII code of '%c'.\n", ch, ch);
    printf("The value of i is %d.\n", i);
    printf("The value of j is %.1f.\n", j);
    return 0;
}
