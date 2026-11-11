#include <stdio.h>

int inputN(void) {
    int n = 1;

    do {
        if (n < 1 || n > 13) {
            printf("Invalid choice!\n");
        }

        printf("Enter n (1-13): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > 13);

    return n;
}

void fibTriangle(int n) {
    int i, j;
    long long f1 = 0;
    long long f2 = 1;
    long long tmp;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            if (i == 1) {
                printf("1");
                continue;
            }
            printf("%lld ", f1 + f2);
            tmp = f2;
            f2 = f1 + f2;
            f1 = tmp;
        }
        printf("\n");
    }
}

void letterPyramid(int n) {
    int i, j;
    int tmp = 0;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("%c", 'A' + tmp);
            tmp++;
        }

        tmp = tmp - 2;

        for (j = 0; j < i - 1; j++) {
            printf("%c", 'A' + tmp);
            tmp--;
        }

        tmp = tmp + 2;
        printf("\n");
    }
}
int main(void) {
    int n, m;
    n = 1;

    do {
        if (n < 1 || n > 3) {
            printf("Invalid choice!\n");
        }

        printf("===== MENU =====\n");
        printf("1. Fibonacci triangle\n2. Letter pyramid\n3. Exit\n");
        printf("Your choice: ");

        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }

        switch (n) {
            case 1:
                m = inputN();
                fibTriangle(m);
                break;

            case 2:
                m = inputN();
                letterPyramid(m);
                break;
            case 3:
                printf("Goodbye!\n");
        }
    } while (n < 1 || n > 3);

    return 0;
}