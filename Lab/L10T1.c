#include <stdio.h>
#define STRING_SIZE 50
int main() {
    char target_string[STRING_SIZE];
    // declare a array to store the string
    int count_a = 0;
    printf("Input a string: ");
    fgets(*target_string, STRING_SIZE + 1, stdin);
    for (int i = 0; i < 50; i++) {
        if (target_string[i] == '\0') break;
        // if the character is '\0', then it is the end of the string
        if (target_string[i] == 'a') count_a += 1;
        // if the character is 'a', then the count_a + 1
    }
    printf("There totally %d 'a' in %s\n", count_a, target_string);
    // Output result not use puts
    return 0;
}
