#include <stdio.h>
// 观察题目可知此题比前两道简单了（
int isalpha(int c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}
//判断下是不是字母
//逻辑是从ctype.h扒的
int main() {
    int sum;
    printf("Input the total number of letters: ");
    scanf("%d", &sum);
    if (sum <= 0) {
        printf("Warning! Total number should be a positive integer!\n");
        return 0;
    }
    char array[sum];
    printf("Input %d ASCII codes: ", sum);
    for(int i = 0; i < sum; i++) {
        scanf("%d", &array[i]);
        if(!isalpha(array[i])) {
            printf("Warning! Invalid ASCII code.\n");
            return 0;
            // 不是字母直接非法
        }
    }
    printf("%s\n", array);
    // 直接以字符串形式输出就完了
    // a.d. 其实char是可以被解析成字符的unsigned short int
    return 0;
}