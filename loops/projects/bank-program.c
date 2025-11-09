#include <stdio.h>
#include <stdbool.h>

// function prototypes
void showMenu();
void checkBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {

    // BANK PROGRAM

    double balance = 0.0;
    int choice = 0;
    bool running = true;

    printf("===== WELCOME TO THE BANK =====\n\n");

    // main program loop
    while (running) {
        showMenu();
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for choosing us!\n");
                printf("Goodbye!\n");
                running = false;
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    }

    return 0;
}

// display the menu options
void showMenu() {
    printf("===== BANK MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("=====================\n");
}

// display current balance
void checkBalance(double balance) {
    printf("Your current balance is: $%.2lf\n\n", balance);
}

// deposit money into account
double deposit(double balance) {
    double amount = 0.0;

    printf("Enter amount to deposit: $");
    scanf("%lf", &amount);

    if (amount > 0) {
        balance += amount;
        printf("Successfully deposited $%.2lf\n", amount);
        printf("New balance: $%.2lf\n\n", balance);
    }
    else {
        printf("Invalid amount! Please enter a positive number.\n\n");
    }

    return balance;
}

// withdraw money from account
double withdraw(double balance) {
    double amount = 0.0;

    printf("Enter amount to withdraw: $");
    scanf("%lf", &amount);

    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            printf("Successfully withdrew $%.2lf\n", amount);
            printf("New balance: $%.2lf\n\n", balance);
        }
        else {
            printf("Insufficient funds!\n");
            printf("Your balance is only $%.2lf\n\n", balance);
        }
    }
    else {
        printf("Invalid amount! Please enter a positive number.\n\n");
    }

    return balance;
}

/*
 * CONCEPTS PRACTICED:
 * - while loops
 * - functions with return values
 * - functions with parameters
 * - void functions
 * - switch statements
 * - boolean flags
 * - input validation
 * - balance tracking
 */