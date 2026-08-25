#include<stdio.h>
//this program is used to calculate the total price of items purchased by the user.

int main(){
    char item_name[100];
    int quantity;
    int price;
    printf("Enter item name: ");
    scanf("%s", item_name);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    printf("Enter price per item: ");
    scanf("%d", &price);

    int total_price = quantity * price;

    printf("**Bill**\n");
    printf("-------------------------\n");
    printf("Total price for %d %s(s) is: %d\n", quantity, item_name, total_price);

    return 0;
}