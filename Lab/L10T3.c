#include <stdio.h>
int strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int main(){
    printf("Input 2 strings: ");
    char str1[51], str2[51];
    for (int i = 0; i < 50; i++) {
        str1[i] = getchar();
        if (str1[i] == ' ') {
            str1[i] = '\0';
            break;
        }
    }
    // Skip the space
    for (int i = 0; i < 50; i++) {
        str2[i] = getchar();
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }
    // Compare str2 with str1
    for (int i = 0; i <= strlen(str1) - strlen(str2); i++) {
        int j;
        for (j = 0; j < strlen(str2); j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == strlen(str2)) {
            printf("str1 contains str2 at position %d\n", i);
            return 0;
        }
    }
    // If str2 is not found in str1
    printf("str1 does not contain str2\n");
    return 0;
}