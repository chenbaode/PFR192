#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void addValue(int *a, int *n, int value);
int searchValue(int *a, int n, int value);
void printArray(int *a, int n);
void printRange(int *a, int n, int minVal, int maxVal);
void printAscending(int *a, int n);

int main(void) {
    int a[MAX];
    int value;
    int choice;
    int n = 0;

    do {
        printf("\nMenu\n");
        printf("1-Add a value\n");
        printf("2-Search a value\n");
        printf("3-Print out the array\n");
        printf("4-Print out values in a range\n");
        printf("5-Print out the array in ascending order\n");
        printf("Others-Quit\n");

        printf("Your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                addValue(a, &n, value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                int result = searchValue(a, n, value);
                if (result == -1) {
                    printf("Value %d not found\n", value);
                } else {
                    printf("Value %d found at position %d.\n",value, result);
                }
                break;
            case 3:
                printf("Current array: ");
                printArray(a, n);
                break;

            case 4:
                int minVal;
                int maxVal;
                printf("Enter min: ");
                scanf("%d", &minVal);
                printf("Enter max: ");
                scanf("%d", &maxVal);

                printf("Value in range %d to %d: ", minVal, maxVal);
                printRange(a, n, minVal, maxVal);
                break;

            case 5:
                printf("Array in ascending order: ");
                printAscending(a, n);
                break;

            default:
                printf("Goodbye!");
                break;
        }
    } while (choice <= 5 && choice >= 1);
}

void addValue(int *a, int *n, int value) {
    if (*n < MAX) {
        a[*n] = value;
        (*n)++;
    } else {
        printf("Out of range!");
    }
}

void printArray(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int searchValue(int *a, int n, int value) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}

void printRange(int *a, int n, int minVal, int maxVal) {
    int i;
    if (maxVal > n) {
        printf("Out of range!");
        return;
    }
    for (i = minVal - 1; i < maxVal; i++) {
        printf("%d ", a[i]);
    }
}
void printAscending(int *a, int n) {
    int i;
    int j;
    int t;

    int tmp[MAX];
    for (i = 0; i < n; i++) {
        tmp[i] = a[i];
    }

    for (i = 0; i < n - 1 ; i++) {
        for (j = i; j < n; j++) {
            if (tmp[j] < tmp[i]) {
                t = tmp[i];
                tmp[i] = tmp[j];
                tmp[j] = t;
            }
        }
    }

    printArray(tmp, n);
}