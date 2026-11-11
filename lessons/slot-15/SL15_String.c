#include <stdio.h>

int main() {
    int i;
    char S[31] = "FPT University 2026";

    for (i = 0; S[i] != '\0'; i++) {
        printf("%c", S[i]);
    }

    printf("\n");

    char S1[31] = {'P', 'R', 'F', '1', '9', '2'};
    printf("%s", S1);

    printf("\n");

    puts(S);

    return 0;
}