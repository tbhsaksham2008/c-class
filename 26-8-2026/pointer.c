#include<stdio.h>
int main(){
    int x = 10;
    printf("Value of x = %d\n", x);
    x = 56;
    printf("New value of x = %d\n", x);
    int b = 34;
    printf("Value of b = %d\n", b);
    int *ptr = &b;
    printf("Value of b using pointer = %d\n", *ptr);
    printf("%d\n", ptr);
    b=134;
    printf("New value of b using pointer = %d\n", *ptr);    
}