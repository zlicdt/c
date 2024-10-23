#include <stdio.h>
int main() {
    int array[50] = {0};
    int input;
    int itera = 0;
    int search_num;
    int index;
    int cnt = 0;
    printf("Please input a sequence of integers (end with -1): ");
    for (;;) {
        scanf("%d", &input);
        if (input == -1) break;
        array[itera] = input;
        itera++;
        if (itera == 50) break; // 此句后加
    }
    if (itera == 0) {
        printf("Array is empty.\n");
        return 0;
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &search_num);
    for (int i = 0; i < itera; i++) {
        if (array[i] == search_num) {
            index = i;
            cnt++;
            break;
            // 要返回序数，第一次搜索到直接序数赋值给index然后出循环
        }
    }
    // 亏我还做了溢出处理
    // 答案让超过50就寄，还有检查点检查
    if (cnt == 0) {
        printf("%d Not found.\n", search_num);
        return 0;
        // 没找到直接输出然后return 0
    }
    printf("The index of %d in the array is %d.\n", search_num, index);
    return 0;
}