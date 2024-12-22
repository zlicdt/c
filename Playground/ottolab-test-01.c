#include <stdio.h>
#include <stdlib.h>
int main() {
    int number, i, *ptr;
    printf("How many integers would you like to store? ");
    scanf("%d", &number);
    ptr = (int*) malloc(sizeof(int));
    if (ptr != NULL) {
        for (i = 0; i < number; i++) {
            *(ptr + i) = i;
        }
        for(i = number; i > 0; i--) {
            printf("%d\n", *(ptr + i - 1));
        }
        free(ptr);
    }
}