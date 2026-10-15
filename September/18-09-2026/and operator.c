#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    ((a&b) == 0) ? printf("true") : printf("false");
    return 0;
}


//Unequal Numbers = True 