#include <stdio.h>

int main() {
    int pin = 1234;
    int enteredPin;
    int attempts = 0;
    int choice;
    float balance = 0.0;
    float amount;



    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Login successful!\n");
            break;
        }

        attempts++;
        printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
    }


    if (attempts == 3) {
        printf("Too many incorrect attempts. Account locked.\n");
        return 0;
    }


    do {
        printf("\n ATM MENU \n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! New balance: %.2f\n", balance);
                } else {
                    printf("Error: Amount must be positive.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0) {
                    printf("Error: Amount must be positive.\n");
                }
                else if (amount > balance) {
                    printf("Error: Insufficient balance.\n");
                }
                else {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: %.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}
