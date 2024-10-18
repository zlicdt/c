#include <stdio.h>
int main() {
    printf("Input a positive integer: ");
    int input;
    scanf("%d", &input);
    if(input <= 0) {
        printf("Warning! You should input a positive integer.\n");
        return 0;
    }
    if(input == 1) {
	printf("%d is not a prime.\n", input);
	return 0;
    }
    for(int i = 2; i < input; i++) {
        if (input % i == 0) {
            printf("%d is not a prime.\n", input);
            return 0;
        }
    }
    printf("%d is a prime.\n", input);
    return 0;
}
