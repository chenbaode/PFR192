#include <stdio.h>
#include <stdlib.h>

void addValue (int a[], int *pn);
void searchValue (int a[], int n);
void removeFirst (int a[], int n, int *pn);
void removeAll (int a[], int n, int *pn);
void print (int a[], int n);
void printAscending (int a[], int n);
void printDescending (int a[], int n);

int main () {
    int n = 0;
    int *a = malloc(100 *sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int flag = 1;
    while (flag == 1) {
        printf("\n");
        printf("1- Add a value\n");
        printf("2- Search a value\n");
        printf("3- Remove the first existence of a value\n");
        printf("4- Remove all existences of a value\n");
        printf("5- Print out the array\n");
        printf("6- Print out the array in ascending order (positions of elements are preserved)\n");
        printf("7- Print out the array in descending order (positions of elements are preserved)\n");
        printf("Others- Quit\n");
        printf("Choose option: ");

        int option;
        scanf("%d", &option);

        if (option == 1) {
            addValue (a, &n);
        } else if (option == 2) {
            searchValue (a, n);
        } else if (option == 3) {
            removeFirst (a, n, &n);
        } else if (option == 4) {
            removeAll (a, n, &n);
        } else if (option == 5) {
            printf("Array: ");
            print(a, n);
        } else if (option == 6) {
            printAscending (a, n);
        } else if (option == 7) {
            printDescending (a, n);
        } else {
            printf("Exit\n");
            return 0;
            flag = 0;
        }
    }
    return 0;
}

void addValue (int a[], int *pn) {
    printf("Enter array of integers: ");
    scanf("%d", &a[0]);

    int i = 0;
    while (a[i] != 0) {
        i++;
        printf("Next, enter 0 = exit: ");
        scanf("%d", &a[i]);
    }

    *pn = i;
}

void searchValue (int a[], int n) {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            printf ("Value %d: %d\n", value, i);
        }
    }
}

void removeFirst (int a[], int n, int *pn) {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == value) {
            int j;
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            break;
        }
    }

    *pn = n - 1;
}

void removeAll (int a[], int n, int *pn) {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == a[value]) {
            int j;
            for (j = i; i < n - 1; j++) {
                a[j] = a[j + 1];
            }
        n--;
        }
    }

    *pn = n;
}

void print (int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void printAscending (int a[], int n) {
    int i;
    int j;
    int minIndex;

    int copy[100];
    for (i = 0; i < n; i++) {
        copy[i] = a[i];
    }

    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = n - 1; j > i; j--) {
            if (copy[j] < copy[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int tmp = copy[minIndex];
            copy[minIndex] = copy[i];
            copy[i] = tmp;
        }
    }
    print(copy, n);
}

void printDescending (int a[], int n) {
    int i;
    int j;
    int maxIndex;

    int copy[100];
    for (i = 0; i < n; i++) {
        copy[i] = a[i];
    }

    for (i = 0; i < n - 1; i++) {
        maxIndex = i;
        for (j = n - 1; j > i; j--) {
            if (copy[j] > copy[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            int tmp = copy[maxIndex];
            copy[maxIndex] = copy[i];
            copy[i] = tmp;
        }
    }
    print(copy, n);
}