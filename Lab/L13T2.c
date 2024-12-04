#include <stdio.h>
#include <string.h>
int fileCombine(char *destFileName, char *resFileName) {
    FILE *destFile, *resFile;
    char ch;
    destFile = fopen(destFileName, "a");
    if (destFile == NULL) {
        return 0;
    }
    // Open the file in append mode
    resFile = fopen(resFileName, "r");
    if (resFile == NULL) {
        return 0;
    }
    // Open the file in read mode
    while ((ch = fgetc(resFile)) != EOF) {
        fputc(ch, destFile);
    }
    // Copy byte by byte
    fclose(destFile);
    fclose(resFile);
    return 1;
}
int main()
{
    char fileName1[20], fileName2[20];
    int flag;
    strcpy(fileName1, "a.txt");
    strcpy(fileName2, "b.txt");
    flag = fileCombine(fileName2, fileName1);
    if (flag == 1) 
        printf("Success");
    else 
        printf ("Failure");
    return 0;
}