#include<stdio.h>
int main(){
    char sentence[100];
    printf ("Enter your name:");
    fgets (sentence,sizeof(sentence),stdin);
    printf("my name is %s",sentence);
}