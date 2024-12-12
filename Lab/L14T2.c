#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int theNumberOfData;
    printf("Input the number of the data: ");
    scanf("%d", &theNumberOfData);
    if (theNumberOfData <= 0) {
        printf("Warning! You should input a positive integer!\n");
        return 0;
    }
    printf("Input %d integer numbers: ", theNumberOfData);
    int *data = (int *)malloc(theNumberOfData * sizeof(int));
    // This should malloc memory for the data
    for (int i = 0; i < theNumberOfData; i++) {
        scanf("%d", data + i);
    }
    // Use pointer to access the data
    printf("Numbers in reverse order are: ");
    for (int i = theNumberOfData - 1; i >= 0; i--) {
        printf("%d ", *(data + i));
    }
    // Use pointer to access the data
    printf("\n");
    return 0;
}