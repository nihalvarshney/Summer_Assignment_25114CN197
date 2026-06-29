//bank account system
#include <stdio.h>
struct Account {
    int accNo;
    char name[50];
    float balance;
};
int main() {
    struct Account a[20];
    int n=0, choice, id; float amt;
    while(1) {
        printf("\n1.Create Account 2.Deposit 3.Withdraw 4.List Accounts 5.Exit\n");
        scanf("%d",&choice);
        if(choice==1) {
            printf("AccNo: "); scanf("%d",&a[n].accNo);
            printf("Name: "); scanf("%s",a[n].name);
            a[n].balance=0; n++;
        } else if(choice==2) {
            printf("AccNo: "); scanf("%d",&id);
            for(int i=0;i<n;i++) if(a[i].accNo==id) {
                printf("Deposit amount: "); scanf("%f",&amt);
                a[i].balance+=amt;
            }
        } else if(choice==3) {
            printf("AccNo: "); scanf("%d",&id);
            for(int i=0;i<n;i++) if(a[i].accNo==id) {
                printf("Withdraw amount: "); scanf("%f",&amt);
                if(amt<=a[i].balance) a[i].balance-=amt;
                else printf("Insufficient funds!\n");
            }
        } else if(choice==4) {
            for(int i=0;i<n;i++)
                printf("%d %s %.2f\n",a[i].accNo,a[i].name,a[i].balance);
        } else if(choice==5) break;
    }
}
