#include<stdio.h>
int main(){
    int a=10;
    printf("a = %d\n", a);
    int b=2;
    printf("b = %d\n", b);
    const int c = a + b;
    printf("c = %d\n", c);
    return 0;
}
// constant can't be changed .