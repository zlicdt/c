#include <stdio.h>
int main() {
    printf("Input a line of characters: ");
    int cnt = 0;
    char c;
    for(;;) {
        scanf("%c", &c);
        if (c == 'c') cnt++;
        if (c == '\n') break;
    }
    printf("There are totally %d 'c'.\n", cnt);
    return 0;
}