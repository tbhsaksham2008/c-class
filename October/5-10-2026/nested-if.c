#include <stdio.h>
#include <string.h>
int main() {
    int age;
    char citizenship;


    printf("Enter your age: ");
    scanf("%d", &age);


    printf("Enter your citizenship: ");
    scanf(" %c", &citizenship);

    if(age >= 18) {

        if(citizenship == 'Y'|| citizenship == 'y') {
            printf("Allowed\n");
        } else {
            printf("Not Allowed\n");
        }
    } 
    else {
        printf("You are a minor.\n");
    }
    return 0;
}   