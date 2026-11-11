#include <stdio.h>

void display(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

//Return the position first found x within the array. First element is 0
//Return -1 in case find not found
int getFirstPos(int a[], int n, int x) {
    int i, pos = -1;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d already existing in the array", x);
            pos = i;
            break;
        }
    }
    return pos;
}

//Find the existing of x within the array
void search(int a[], int n, int x) {
    int i, flag = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d already existing in the array", x);
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Find not founf %d in the array", x);
    }
}

int main() {
    int n = 14;
    int a[] = {2, 5, 4, 9, 2, 6, 8, 3, 2, 9, 7, 1, 8, 2};
    display(a, n);
    int x;
    printf("Input searching number: ");
    scanf("%d", &x);
    search(a, n, x);
    int pos;
    pos = getFirstPos(a, n, x);
    if (pos != -1)
        printf("\nThe position first found %d is %d", x, pos);
    else 
        printf("\nFind not found %d in the array", x);

    printf("\n");

    return 0;
}