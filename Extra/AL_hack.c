#include <stdio.h>
#include <stdlib.h>
int main() {
    char *home = getenv("HOME");
    char *shell = getenv("SHELL");
    char *arch = getenv("CPU");
    char *lang = getenv("LANG");
    char *os_type = getenv("OSTYPE");
    char *path = getenv("PATH");
    printf("Home directory: %s\n", home);
    printf("Shell: %s\n", shell);
    printf("Arch: %s\n", arch);
    printf("Language: %s\n", lang);
    printf("OS type: %s\n", os_type);
    printf("Path: %s\n", path);
    return 0;
}