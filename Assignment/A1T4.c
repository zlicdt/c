#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    char input_f, input_s;
    char convert_f, convert_s;
    char output[3];
    printf("Input: ");
    scanf("%c%*c%c", &input_f, &input_s);
    if (isalpha(input_f) && isalpha(input_s)) {
        convert_f = input_f;
        convert_s = input_s;
        if (islower(convert_f)) convert_f -= 32;
        if (islower(convert_s)) convert_s -= 32;
        if (convert_f == convert_s) sprintf(output, "%c %c", input_f, input_s);
        if (convert_f < convert_s) sprintf(output, "%c %c", input_f, input_s);
        if (convert_f > convert_s) sprintf(output, "%c %c", input_s, input_f);
        printf("Output: %s\n", output);
        return 0;
    }
    if (!isalpha(input_f)) {
        printf("Warning! '%c' is not a English letter.\n", input_f);
        return 0;
    } else if (!isalpha(input_s)) {
        printf("Warning! '%c' is not a English letter.\n", input_s);
        return 0;
    }
    return 0;
}