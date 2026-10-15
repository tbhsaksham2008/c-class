#include <stdio.h>
#include <string.h>
int main(){
    char st1[]="Welcome";
    char st2[]="Welcome";
    (strcmp(st1,st2)==0)?printf("Both strings are equal\n"):printf("Both strings are not equal\n");
}