#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <cpuid.h>
#include <string.h>
void get_cpu_name(char *cpu_name) {
    unsigned int eax, ebx, ecx, edx;
    char cpu_brand[0x40];

    // Get CPU brand string
    __cpuid(0x80000002, eax, ebx, ecx, edx);
    memcpy(cpu_brand, &eax, sizeof(eax));
    memcpy(cpu_brand + 4, &ebx, sizeof(ebx));
    memcpy(cpu_brand + 8, &ecx, sizeof(ecx));
    memcpy(cpu_brand + 12, &edx, sizeof(edx));

    __cpuid(0x80000003, eax, ebx, ecx, edx);
    memcpy(cpu_brand + 16, &eax, sizeof(eax));
    memcpy(cpu_brand + 20, &ebx, sizeof(ebx));
    memcpy(cpu_brand + 24, &ecx, sizeof(ecx));
    memcpy(cpu_brand + 28, &edx, sizeof(edx));

    __cpuid(0x80000004, eax, ebx, ecx, edx);
    memcpy(cpu_brand + 32, &eax, sizeof(eax));
    memcpy(cpu_brand + 36, &ebx, sizeof(ebx));
    memcpy(cpu_brand + 40, &ecx, sizeof(ecx));
    memcpy(cpu_brand + 44, &edx, sizeof(edx));

    // Copy CPU brand string to cpu_name
    strcpy(cpu_name, cpu_brand);
}
int main() {
    char cpu_name[0x40] = {0};
    get_cpu_name(cpu_name);
    printf("Home directory: %s\n", getenv("HOME"));
    printf("Shell: %s\n", getenv("SHELL"));
    printf("Arch: %s\n", getenv("CPU"));
    printf("Locale: %s\n", getenv("LANG"));
    printf("OS type: %s\n", getenv("OSTYPE"));
    printf("CPU: %s\n", cpu_name);
    printf("Threads: %ld\n", sysconf(_SC_NPROCESSORS_ONLN));
    printf("C version: %ld\n", __STDC_VERSION__);
    int cnt = 0;
    printf("Please input some words: ");
    char str[21];
    // 21 to avoid overflow
    for (int i = 0;; i++) {
        scanf("%s", str);
        if (strcmp(str, "End") == 0) break;
        // If the input is "End", break the loop
        cnt++;
        // Count the number of words
    }
    printf("There are totally %d words.\n", cnt);
    return 0;
}