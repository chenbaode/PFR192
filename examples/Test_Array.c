#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void addValue (int a[], int *n, int value);
int searchValue (int a[], int n, int value);
void printArray (int a[], int n);
void printRange (int a[], int n, int minVal, int maxVal);
void printAscending (int a[], int n);

int main() {
    int a[MAX];
    int n = 0;
    int choice, value, maxVal, minVal;

    do {
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Enter value to add: ");
            scanf("%d", &value);
            addValue(a, &n, value);
            break;
        case 2:
            printf("Enter value to search: ");
            scanf("%d", &value);
            int pos = searchValue(a, n, value);
            if (pos != -1) {
                printf("Value %d found at position %d.\n", value, pos);
            } else {
                printf("Value %d not found.\n", value);
            }
            break;
        case 3:
            printf("Current array: ");
            printArray(a, n);
            break;
        case 4:
            printf("Enter min of value: ");
            scanf("%d", &minVal);
            printf("Enter max of value : ");
            scanf("%d", &maxVal);
            printf("Value in range: ");
            printRange(a, n, minVal, maxVal);
            break;
        case 5: 
            printf("Array in ascending order: ");
            printAscending(a, n);
            break;
        case 0:
            printf("Exit");
            return 0;
        }
    } while (choice != 0);
    
    printf("\n");
}

void addValue(int a[], int *n, int value) {
    if (*n >= MAX) {
        printf("Array is full. Cannot add more values.\n");
        return;
    }
    a[*n] = value;
    (*n)++;
    printf("Value %d added successfully.\n", value);
}

int searchValue(int a[], int n, int value) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

void printArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void printRange(int a[], int n, int minVal, int maxVal) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] >= minVal && a[i] <= maxVal) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

void printAscending(int a[], int n) {
    int b[100];
    int i;
    for (i = 0; i < n; i++) {
        b[i] = a[i];
    }

    int min, j, tmp;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (b[j] < b[i]) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
    }

    printArray(b, n);
}