#include <stdio.h>
#include <string.h>
int main() {
    int cnt = 0;
    printf("Please input some words: ");
    char str[21];
    // 21 to avoid overflow
    for (int i = 0;; i++) {
        scanf("%s", str);
        if (strcmp(str, "End") == 0) break;
        // If the input is "End", break the loop
        cnt++;
        // Count the number of words
    }
    printf("There are totally %d words.\n", cnt);
    return 0;
}