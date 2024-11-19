#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define STR_MAX 50
int main() {
    int upper_cnt = 0, lower_cnt = 0, space_cnt = 0;
    char str[STR_MAX + 1];
    printf("Input a string: ");
    fgets(str, STR_MAX + 1, stdin);
    printf("Original str is %s\n", str);
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (isupper(str[i])) {
                upper_cnt++;
            } else {
                lower_cnt++;
            }
        }
        if (str[i] == ' ') {
            space_cnt++;
        }
    }
    // For each space, shift all characters to the left
    // Count the space and alphabet characters
    printf("There are %d upper-case letters, %d lower-case letters, %d spaces totally.\n", upper_cnt, lower_cnt, space_cnt);
    for (int i = 0; i < strlen(str); i++) {
        for(;;) {
            if (str[i] == ' ') {
                for (int j = i; j < strlen(str); j++) {
                    str[j] = str[j + 1];
                }
            } else {
                break;
            }
        }
    }
    // Output the string after removing spaces
    printf("String now is %s\n", str);
    return 0;
}