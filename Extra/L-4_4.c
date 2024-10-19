/*
我们观察到，题目要求找到[100, 200]范围的质数
所以这里我们设想
从100遍历到200,遇到质数输出它
然后我们写一个循环，使用另一个变量，从2开始一直自增循环到需要判断的数
如果内层循环结束还没有发现需要判断的数可以被整除，那么它就是质数
我这里为了方便，用的函数，这样可以直接返回状态，找到质数就返回它，找不到就返回0
然后在外层循环里调用函数，当返回的状态是0时代表没有找到，这时候需要判断下一个数，不需要输出
所以我们continue;
找到质数，那么返回值不为0,即输出这个质数并继续循环
*/
#include <stdio.h>
int calc(int input) {
    for(int i = 2; i < input; i++) {
        if (input % i == 0) {
            return 0;
        }
    }
    return input;
}
int main() {
    int status;
    for (int i = 100; i <= 200; i++) {
        status = calc(i);
        if (status == 0) continue;
        if (status != 0) printf("%d\n", i);
    }
}