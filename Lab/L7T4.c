#include <stdio.h>
// 写个冒泡排序先
void sort(int *array, int sum, int mode) {
    int temp;
    int flag = 0;
    for (;;) {
        flag = 0;
        // 模式1从大到小，模式2从小到大
        if(mode == 1) {
            for (int i = 0; i < sum - 1; i++) {
                if(array[i] < array[i + 1]) {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    flag = 1;
                }
            }
        } else {
            for (int i = 0; i < sum - 1; i++) {
                if(array[i] > array[i + 1]) {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    flag = 1;
                }
            }
        }
        if (flag == 0) break;
    }
}
int main() {
    int sum;
    int temp;
    int flag = 0;
    printf("Input the size of the array: ");
    scanf("%d", &sum);
    if (sum <= 0) {
        printf("Warning! Array size should be positive.\n");
        return 0;
    }
    printf("Input %d integers of the array: ", sum);
    int array[sum];
    for(int i = 0; i < sum; i++) scanf("%d", &array[i]);
    printf("The original array is: ");
    for(int i = 0; i < sum; i++) printf("%d ", array[i]);
    sort(array, sum, 0);
    printf("\nAfter sorting, the array in ascending order is: ");
    for (int i = 0; i < sum; i++) printf("%d ", array[i]);
    sort(array, sum, 1);
    printf("\nAfter sorting, the array in descending order is: ");
    for (int i = 0; i < sum; i++) printf("%d ", array[i]);
    printf("\n");
    // 感觉写麻烦了
    return 0;
}