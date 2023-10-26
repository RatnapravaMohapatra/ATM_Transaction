#include <stdio.h>


void displayBalance(float balance) {
    printf("Your account balance is: $%.2f\n", balance);
}


float deposit(float balance, float amount) {
    balance += amount;
    return balance;
}


float withdraw(float balance, float amount) {
    if (balance >= amount) {
        balance -= amount;
        printf("Withdrawal successful. Please take your cash.\n");
    } else {
        printf("Insufficient balance. Transaction canceled.\n");
    }
    return balance;
}

int main() {
    float accountBalance = 100000.00; 

    int choice;
    float amount;

    printf("Welcome to the ATM!\n");

    do {
        printf("\nMain Menu:\n");
        printf("1. Display Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayBalance(accountBalance);
                break;
            case 2:
                printf("Enter the amount to deposit: $");
                scanf("%f", &amount);
                accountBalance = deposit(accountBalance, amount);
                displayBalance(accountBalance);
                break;
            case 3:
                printf("Enter the amount to withdraw: $");
                scanf("%f", &amount);
                accountBalance = withdraw(accountBalance, amount);
                displayBalance(accountBalance);
                break;
            case 4:
                printf("Thank you for using the ATM. Have a nice day!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
