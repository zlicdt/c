#include <stdio.h>

#define array_size 5

int main() {
    int array[array_size] = {0};
    int choice;
    int input;
    int itera = 0;
    // 观察题目可知这是个 vector lite
    // 既然如此那就
    // 使用《迭代器》
    for (;;) {
        printf("Please choose action(1: Push 2: Pop  0: Exit): ");
        scanf("%d", &choice);
        if(choice == 1) {
            if(itera == array_size) {
                printf("Unsuccessful push operation: Stack is full\n");
            } else {
                printf("Enter an integer to push: ");
                scanf("%d", &input);
                array[itera] = input;
                itera++;
                // 执行完，对 status+1
                // 下次操作下一个
            }
        }
        if(choice == 2) {
            if (itera == 0) {
                printf("Unsuccessful pop operation: Stack is empty\n");
            } else {
                printf("Popped: ");
                scanf("%d", &input);
                array[itera] = 0;
                itera--;
                // 执行完，对 status-1
                // 下次操作上一个
                // 这里可以没有赋值过程，反正输出到头也看不到
                // 出于责任加上了
            }
        }
        if(choice == 0) {
            printf("Exiting the program\n");
            return 0;
        }
        printf("----------------------\n");
        printf("| Stack: ");
        for(int i = 0; i < itera; i++) {
            printf("%d ", array[i]);
        }
        printf("\n----------------------\n");
    }
    return 0;
}