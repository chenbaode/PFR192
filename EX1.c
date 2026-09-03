#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

void input(int a[], int *pn);
int max(int a[], int n);
void print(int a[], int n);
void printEven(int a[], int n);

int main(void) {
    int n;
    int *pn = &n;
    int *a = calloc(100, sizeof(int));

    printf("Enter an integer array that may contains 100. The input will terminate when enters zero: ");
    input(a, pn);

    printf("Max value: %d\n", max(a, n));
    printf("Inputted array: ");
    print(a, n);
    printf("\n");
    printf("Even values in array: ");
    printEven(a, n);
    printf("\n");
}

void input(int a[], int *pn) {
    printf("Enter integer array: ");
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    while (n != 0) {
        a[count] = n;
        count++;
        scanf("%d", &n);
    }
    *pn = count;
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int max(int a[], int n) {
    int i;
    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void printEven(int a[], int n) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("Not even values");
    }
}