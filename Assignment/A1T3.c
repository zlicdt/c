#include <stdio.h>

#define convert_RMB(x) ((7.2) * (x));
#define convert_HKD(x) ((8.1) * (x));

int main() {
    printf("Please input amount of in Euro:");
    double euro;
    unsigned short int choose;
    scanf("%lf", &euro);
    printf("Please choose the currency converting to (1: HK dollar, 2: RMB): ");
    scanf("%d", &choose);
    double res;
    switch (choose) {
    case 1:
        res = convert_HKD(euro);
        printf("%.2f euro=%.2f HK dollar\n", euro, res);
        break;
    case 2:
        res = convert_RMB(euro);
        printf("%.2f euro=%.2f RMB\n", euro, res);
        break;
    default:
        break;
    }
    return 0;
}