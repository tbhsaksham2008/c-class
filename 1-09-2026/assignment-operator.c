#include<stdio.h>
int main(){
    int a=10;
    char b=a;
    int c=20;
    printf("%d \n",a);
    a+=2; // a+=2; is used to add 2 to the value of a and assign the result back to a
    printf("%d \n",a);
    printf("%d \n",sizeof(a)); // sizeof(a) is used to get the size of the variable a in bytes
    printf("%d \n",sizeof(b)); // sizeof(b) is used to get the size of the variable b in bytes
    int d= (a>c)?a:c; // int d= (a>c)?a:c; is used  to compare the value of a and c and assign the greater value to d
    printf("%d \n",d);
    return 0;
}