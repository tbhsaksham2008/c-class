#include <stdio.h>
int main(){
    int situation;
    printf("Enter a situation (1-4): ");
    scanf("%d", &situation);
    switch(situation){
        case 1:
            printf("Login \n");
            break;
        case 2:
            printf("Dashboard \n");
            break;
        case 3:
            printf("Settings \n");
            break;
        case 4:
            printf("Logout \n");
            break;
        default:
            printf("Please enter a valid situation (1-4).\n");
    }
    return 0;
}