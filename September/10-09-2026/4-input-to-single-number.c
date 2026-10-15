#include <stdio.h>
int main(){
    int a,b,c,d;

// take input from user continue reading the code covert it into a single digital number and print it

    scanf("%d %d %d %d",&a,&b,&c,&d);
    int e=a*1000 + b*100 + c*10 + d;
    printf("%d\n",e);
}