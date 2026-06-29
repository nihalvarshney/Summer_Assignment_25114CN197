//atm simulation
#include <stdio.h>

int main() {
    int balance = 1000, choice, amount;
    while(1) {
        printf("\nATM Menu:\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Balance: %d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposited! New Balance: %d\n", balance);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if(amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn! New Balance: %d\n", balance);
                } else {
                    printf("Insufficient funds!\n");
                }
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
