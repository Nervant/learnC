#include <stdio.h>

int main() {
    char item[16] = "";
    int quantity = 0;
    float price = 0.0f;
    char symbol = '$';
    float total = 0.0f;

    printf("Enter your item: ");
    fgets(item, sizeof(item), stdin);

    printf("How much would you like: ");
    scanf("%d", &quantity);

    printf("Enter the price: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("\nYou have bought %d %s", quantity, item);
    printf("The total is %.2f%c", total, symbol);

    return 0;
}