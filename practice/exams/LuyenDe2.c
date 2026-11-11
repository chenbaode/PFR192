#include <stdio.h>

int main() {
    int lo, hi;
    int i, bit;
    int upper = 0, lower = 0, digit = 0;
    int control = 0, other = 0;

    if (scanf("%d%d", &lo, &hi) != 2) {
        printf("Invalid input\n");
        return 0;
    }

    if (lo < 0 || lo > hi || hi > 255) {
        printf("Invalid range\n");
        return 0;
    }

    for (i = lo; i <= hi; i++) {
        /* In tieu de o dau moi trang 16 dong */
        if ((i - lo) % 16 == 0) {
            printf("\nDEC  HX  OCT  BINARY    CHAR\n");
            printf("--------------------------------\n");
        }

        printf("%-3d  %02X  %03o  ", i, i, i);

        /* In nhi phan du 8 bit */
        for (bit = 7; bit >= 0; bit--) {
            printf("%d", (i >> bit) & 1);
        }

        /* Dung dau '.' cho ma ngoai ASCII in duoc */
        if (i >= 32 && i <= 126) {
            printf("  %c\n", i);
        } else {
            printf("  .\n");
        }

        /* Dem so ky tu thuoc tung nhom */
        if (i >= 'A' && i <= 'Z') {
            upper++;
        } else if (i >= 'a' && i <= 'z') {
            lower++;
        } else if (i >= '0' && i <= '9') {
            digit++;
        } else if (i < 32 || i == 127) {
            control++;
        } else {
            other++;
        }
    }

    printf("\nUpper   : %d\n", upper);
    printf("Lower   : %d\n", lower);
    printf("Digit   : %d\n", digit);
    printf("Control : %d\n", control);
    printf("Other   : %d\n", other);

    return 0;
}