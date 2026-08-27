#include<stdio.h>
int main(){
    int largevariable[5];
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    largevariable[0]=a;
    largevariable[1]=b;
    largevariable[2]=c;
    largevariable[3]=d;
    largevariable[4]=a+b+c+d;
    printf("The sum of the variables is: %d\n", largevariable[4]);
    printf("The average of the variables is: %d\n", largevariable[4]/4);
}