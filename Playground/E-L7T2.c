#include <stdio.h>
int main() {
    int array[50] = {0};
    int input;
    int search;
    int index = -1;
    int cnt = 0;
    printf("Please input a sequence of integers (end with -1): ");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &input);
        if (input == -1) break;
        array[i] = input;
        cnt++;
    }
    if (cnt == 0) {
        printf("Array is empty.\n");
        return 0;
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search);
    for (int i = 0; i < cnt; i++) {
        if (array[i] == search) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("%d Not found.\n", search);
        return 0;
    }
    printf("The index of %d in the array is %d.\n", search, index);
    return 0;
}