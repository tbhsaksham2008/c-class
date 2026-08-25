#include <stdio.h>

int main() {
    int number[10];
    for(int i=0;i<=9;i++){
        printf("enter %d value:- ",i+1);
        scanf("%d",&number[i]);
    }
    for(int i=0;i<=9;i++){
        printf("%d value is %d\n",i+1,number[i]);
    }
}