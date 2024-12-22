#include <stdio.h>
/*
可知此题要进行从1到1000遍历
循环求一个数的因数
然后累加因数
等于输入的数就表示这是完数
判断函数返回1（当然这是布尔值
然后是完数就输出
*/
int calc(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    for (int n = 1; n <= 1000; n++) {
        if (calc(n)) {
            printf("%d\n", n);
        }
    }
    return 0;
}
