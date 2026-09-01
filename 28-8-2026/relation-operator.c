#include<stdio.h>
int main(){
    float a;
    float b;
    int i;
    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
        if(a==b){
            printf("a is equal to b\n");
        }
        else if(a!=b){
            printf("a is not equal to b\n");
        }
        else if(a>b){
            printf("a is greater than b\n");
        }
        else if(a<b){
            printf("a is less than b\n");   
        }
    
}