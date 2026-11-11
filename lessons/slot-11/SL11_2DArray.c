#include <stdio.h>
#define MAX 10

void intput2DArray(int a[][MAX], int r, int c);
void display2DArray(int a[][MAX], int r, int c);
void displayMainDiagonal(int a[][MAX], int r, int c);
void squarePrimeInMainDiagonal(int a[][MAX], int r, int c);
int isPrime(int n);
void calTotalByRow(int a[][MAX], int r, int c);
void calTotalByColumns(int a[][MAX], int r, int c);
void displaySubDiagonal(int a[][MAX], int r, int c);
void displaySubDiagonal(a, r, c);

int main() {
    int a[MAX][MAX];
    int r, c;
    printf("Input number of row and column: ");
    scanf("%d%d", &r, &c);
    intput2DArray(a, r, c);
    display2DArray(a, r, c);
    printf("\n--Main diagonal--\n");
    displayMainDiagonal(a, r, c);
    printf("\n--Square prime in main diagonal--\n");
    squarePrimeInMainDiagonal(a, r, c);
    printf("\n-------\n");
    calTotalByRow(a, r, c);
    printf("\n-------\n");
    calTotalByColumns(a, r, c);
    return 0;
}

void displayMainDiagonal(int a[][MAX], int r, int c) {
    int i;
    if (r > c) {
        r = c;
    }

    for (i = 0; i < r; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
}


void intput2DArray(int a[][MAX], int r, int c){
    int i, j;
    for(i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
        printf("a[%d][%d] = ", i, j); scanf("%d", &a[i][j]);
    }
}

void display2DArray(int a[][MAX], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

void squarePrimeInMainDiagonal(int a[][MAX], int r, int c) {
    int i;
    if (r > c) {
        r = c;
    }

    for (i = 0; i < r; i++) {
        if (isPrime(a[i][i]) == 1) {
            printf("%d ", a[i][i]*a[i][i]);
        } else {
            printf("%d ", a[i][i]);
        }
    }
    printf("\n");
}

void calTotalByRow(int a[][MAX], int r, int c) {
    int printRow;
    printf("Enter Row: ");
    scanf("%d", &printRow);

    int sum = 0;
    int i;
    for (i = 0; i <= c; i++) {
        sum += (a[printRow][i]);
    }

    printf("Sum: %d", sum);
}

void calTotalByColumns(int a[][MAX], int r, int c) {
    int printColums;
    printf("Enter Row: ");
    scanf("%d", &printColums);

    int sum = 0;
    int i;
    for (i = 0; i <= r; i++) {
        sum += (a[printColums][i]);
    }

    printf("Sum: %d", sum);
}

void displaySubDiagonal(a, r, c) {
    int i, j;
    for (i = 0; i < r; i++) {
        printf("%d ", a[i][r-1-i]);
    }
}