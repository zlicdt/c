#include <stdio.h>
float exchange(float a[], int n);
int main() {
    float data[4] = {2.5, 1, 1.2, 5.2};
    int i;
    exchange(data, 4);
    // Exchange function is used to sort the array in descending order.
    printf("The biggest element in the array is %.2f\n", exchange(data, 4));
    // Modified exchange function to return the biggest element in the array.
    // Copy data array to another array and sort it in descending order.
    for (i = 0; i <= 3; i++)
        printf("%.2f ", data[i]);
    printf("\n");
    return 0;
}
float exchange(float a[], int n) {
    int flag;
    float temp;
    float arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = a[i];
    }
    // Copy origin array to another array.
    for(;;) {
        flag = 0;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] < arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = 1;
            }
            // bubble sort
        }
        if (flag == 0) break;
    }
    return arr[0];
}