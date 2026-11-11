#include <stdio.h>

void displayArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void displayArrReverse(int a[], int n) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void displayOddArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void displayEvendArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void inputArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int isPrimes (int n) {
    if (n < 2) {
        return 0;
    } else {
        int i;
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                return 0;
            }
        }
    }

    return 1;
}

void displayPrimes(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (isPrimes(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void displaySquarePrimes(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (isPrimes(a[i])) {
            printf("%d ", a[i]*a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    inputArr(arr, n);
    printf("\n");

    displayArr(arr, n);
    displayArrReverse(arr, n);
    displayOddArr(arr, n);
    displayEvendArr(arr, n);
    displayPrimes(arr, n);
    displaySquarePrimes(arr, n);

    return 0;
}