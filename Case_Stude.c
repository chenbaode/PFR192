#include <stdio.h>

typedef struct {
    int Number;
    char Type[20];
    char HolderName [40];
    double Balance;
} accountCustomer;

void clear(void) {
    while (getchar() != '\n');
}

void inputInfo(accountCustomer accounts[], int n);
void printAccount(accountCustomer acc);
void printInfor(accountCustomer accounts[], int n);
void searchAccountCustomers(accountCustomer accounts[], int n);

int main(void) {
    accountCustomer accountCustomers[100];
    int n;

    printf("input number of the Customer account: ");
    scanf("%d", &n);
    inputInfo(accountCustomers, n);
    printInfor(accountCustomers, n);
    searchAccountCustomers(accountCustomers, n);

    return 0;
}

void inputInfo(accountCustomer accounts[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("# %d\n", i + 1);
        clear();
        printf("Account number: ");
        scanf("%d", &accounts[i].Number);
        clear();
        printf("Account type: ");
        scanf("%[^\n]", accounts[i].Type);
        clear();
        printf("Account holder name: ");
        scanf("%d[^\n]", &accounts[i].HolderName);
        printf("Balance: ");
        scanf("%lf", &accounts[i].Balance);
        clear();
    }
}

void printAccount(accountCustomer acc) {
    printf("%d\t%s\t%s\n%.2lf\n", acc.Number, acc.Type, acc.HolderName, acc.Balance);
}

void printInfor(accountCustomer accounts[], int n) {
    int i;
    printf("\nList of the Customer account:\n");
    for (i = 0; i < n; i++) {
        printAccount(accounts[i]);
    }
}

void searchAccountCustomers(accountCustomer accounts[], int n) {
    int i;
    printf("\nSearch resule:\n");
    for (i = 0; i < n; i++) {
        if (accounts[i].Balance > 0) {
            printAccount(accounts[i]);
        }
    }
}