#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[21];

    char address[30] = "Hoa Lac Hi-tech Park";
    char country[30] = {'V', 'i', 'e', 't', 'N', 'a', 'm', '\0'};

    int i;
    for (i = 0; address[i] != '\0'; i++) {
        printf("%c", address[i]);
    }
    printf("\n");

    for (i = 0; country[i] != '\0'; i++) {
        printf("%c", country[i]);
    }
    printf("\n");

    return 0;
}