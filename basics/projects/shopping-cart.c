#include <stdio.h>

int main() {
    char item[16] = "";     // item name
    int quantity = 0;       // number of items
    float price = 0.0f;     // price per item
    char symbol = '$';      // currency symbol
    float total = 0.0f;     // total cost

    printf("Enter your item: ");
    fgets(item, sizeof(item), stdin);  // read item name (includes newline)

    printf("How much would you like: ");
    scanf("%d", &quantity);

    printf("Enter the price: ");
    scanf("%f", &price);

    total = quantity * price;  // calculate total

    printf("\nYou have bought %d %s", quantity, item);
    printf("The total is %.2f%c", total, symbol);

    return 0;
}