#include<stdio.h>
int main(){
    int size[50];
    int i,num;
    printf("Please input a sequence of integers (end with -1): ");
    for (i = 0; i < 50; i++)
        scanf("%d", &size[i]);
    while (size[i]==-1)
    {
    break;
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&num);
    for ( i = 0; i < 50; i++) {
    if (num==size[i])
        {
            printf("The index of %d in the array is %d.\n",num,i);
            return 0;
        }
    }
    printf("%d Not found.\n",num);
    return 0;
}