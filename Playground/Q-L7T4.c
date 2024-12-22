#include<stdio.h>
int main(){
    int n,i,in,temp,temp1,as,op;
    int flag;
    printf("Input the size of the array: ");
    scanf("%d",&n);
    int a[n];
    if(n<=0){
        printf("Warning! Array size should be positive.");
    }else{
        printf("Input %d integers of the array: ", n);
        for(i=0;i<=n-1;i++){
            scanf("%d",&in);
            a[i]=in;
        }
        printf("The original array is: ");
        for(temp1=0;temp1<=n-1;temp1++){
        printf("%d ",a[temp1]);
        }
        for(;;) {
            flag = 0;
            for(as=0;as<n-1;as++) {
                if(a[as] > a[as+1]) {
                    temp = a[as];
                    a[as] = a[as+1];
                    a[as+1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0) break;
        }
        printf("\nAfter sorting, the array in ascending order is: ");
        for(op=0;op<=n-1;op++)
        printf("%d ",a[op]);
        for(;;) {
            flag = 0;
            for(as=0;as<n-1;as++) {
                if(a[as] < a[as+1]) {
                    temp = a[as];
                    a[as] = a[as+1];
                    a[as+1] = temp;
                    flag = 1;
                }
            }
            if (flag == 0) break;
        }
        printf("\nAfter sorting, the array in descending order is: ");
        for(op=0;op<=n-1;op++)
        printf("%d ",a[op]);
    }
    printf("\n");
    return 0;
}