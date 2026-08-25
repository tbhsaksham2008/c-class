#include<stdio.h>
int main(){
    char sentence[100];
    printf ("Enter your name:");
    scanf("%[^\n]",&sentence);  // %[^\n] == means run until enter
    printf("my name is %s",sentence);
}