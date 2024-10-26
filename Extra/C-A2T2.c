#include <stdio.h>

int main() {
    for(int num = 2; num < 1000; num++) {
        int sum = 1;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0){
                if(i * i != num){
                    sum += i + (num / i);
                } else {
                    sum += i;
                }
            }
        }
        int cnt = 0;
        if(sum == num) {
            printf("%d = ", num);
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    if (cnt == 0) {
                        printf("%d", i);
                        cnt++;
                        continue;
                    }
                    printf("+%d", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}