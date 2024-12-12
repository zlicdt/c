#include <stdio.h>
#include <stdlib.h>
struct stuRec{
    char name[20];
    int id; 
    char gender;
};
int main()
{
    struct stuRec *p;
    p = (struct stuRec*)malloc(sizeof(struct stuRec));
    if (p) {
        printf("please input name, id and gender\n");
        scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
        printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
        free (p);
    }
    return 0;
}
/*
1. This program get a name, an id, and a gender infomation, finally output them
2. It is dynamically allocated memory
3. It is used to ignore a space
4. The output of name become right-justified
5. We allocated memory for a structure, this p is a pointer to the structure, we should free it after using it to avoid memory leak
*/