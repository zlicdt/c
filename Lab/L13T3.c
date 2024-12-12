#include <stdio.h>
int main() {
    FILE *sample = fopen("sample.bin", "r");
    if (sample == NULL) {
        return 0;
    }
    float _number, __number;
    // This two number is float
    fseek(sample, 4*(sizeof(float)), SEEK_CUR);
    // Use fseek to skip the first 4 bytes, now the file pointer is at the 5th byte
    fread(&_number, sizeof(float), 1, sample);
    // Read the next 4 bytes to _number, now the file pointer is at the 6th byte
    fseek(sample, 1*(sizeof(float)), SEEK_CUR);
    // Use fseek to skip the next 1 bytes, now the file pointer is at the 7th byte
    fread(&__number, sizeof(float), 1, sample);
    // Read the next 4 bytes to __number, now the file pointer is at the 8th byte
    fclose(sample);
    // Close the file
    printf("num1 is %f\nnum2 is %f\n", _number, __number);
    return 0;
}