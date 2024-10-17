#include <stdio.h>
int main() {
    char ch = '*';
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1) ch = '=';
        if (i % 2 == 0) ch = '*';
        for (int j = 0; j < (9 - 2 * i); j++) printf("%c", ch);
        printf("\n");
    }
}