#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    char a[count][3];
    int res = 0;
    for(int i = 0; i < count; i++) {
        scanf("%s", a[i]);
        if((a[i][0] != a[i][1]) && (a[i][1] == a[i][2])) res++;
    }
    printf("%d\n", res);
    return 0;
}