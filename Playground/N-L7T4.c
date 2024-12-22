#include <stdio.h>
int main() {
    int size_arr;
    int input_num;
    int temp;
    int is_sorted;
    printf("Input the size of the array: ");
    scanf("%d", &size_arr);
    int arr[size_arr];
    if (size_arr <= 0) {
        printf("Warning! Array size should be positive.\n");
        return 0;
    }
    printf("Input %d integers of the array: ", size_arr);
    for (int i = 0; i < size_arr; i++) {
        scanf("%d", &input_num);
        arr[i] = input_num;
    }
    printf("The original array is: ");
    for (int i = 0; i < size_arr; i++) {
        printf("%d ", arr[i]);
        if (i == size_arr - 1) {
            printf("\n");
        }
    }
    for (;;) {
        is_sorted = 0;
        for (int i = 0; i < size_arr - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                is_sorted = 1;
            }
        }
        if (is_sorted == 0) {
            break;
        }
    }
    printf("After sorting, the array in ascending order is: ");
    for (int i = 0; i < size_arr; i++) {
        printf("%d ", arr[i]);
        if (i == size_arr - 1) {
            printf("\n");
        }
    }
    for (;;) {
        is_sorted = 0;
        for (int i = 0; i < size_arr - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                is_sorted = 1;
            }
        }
        if (is_sorted == 0) {
            break;
        }
    }
    printf("After sorting, the array in descending order is: ");
    for (int i = 0; i < size_arr; i++) {
        printf("%d ", arr[i]);
        if (i == size_arr - 1) {
            printf("\n");
        }
    }
    return 0;
}