#include <stdio.h>
void stringCombine(char* dest, char* src);
int main()
{
    char str1[256], str2[256];
    gets(str1);
    gets(str2);
    stringCombine(str1, str2);
    puts(str1);
    // Just output the first string
    return 0;
}
void stringCombine(char *dest, char *src){
    while (*dest != '\0') dest++;
    while (*src != '\0') {
        *dest = *src;
        // Copy it char by char
        dest++;
        src++;
    }
    *dest = '\0';
    // Finish this string
}
