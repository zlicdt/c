#include <stdio.h>
struct data {
    char    name[50];
    int     score;
    char    major[50];
};
void sort(struct data *array, int sum) {
    struct data temp;
    unsigned short flag = 0;
    for (;;) {
        flag = 0;
        for (int i = 0; i < sum - 1; i++) {
            if(array[i].name[0] > array[i + 1].name[0]) {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }
}
int main() {
    int     _input;
    printf("Input the number of students: ");;
    scanf("%d", &_input);
    if (_input < 1) {
        printf("Warning! Student number should be positive.\n");
        return 0;
    }
    struct data info[_input];
    // Use struct array to store infos
    printf("Please input students' information:\n");
    for (int i = 0; i < _input; i++) {
        scanf("%s %d %s", &info[i].name, &info[i].score, &info[i].major);
    }
    sort(info, _input);
    printf("The student list in ascending order by name is:\n");
    for (int i = 0; i < _input; i++) {
        printf("%s %d %s\n", info[i].name, info[i].score, info[i].major);
    }
    // Use bubble sort to sort these struct array
    // By these name first alphabet
    return 0;
}