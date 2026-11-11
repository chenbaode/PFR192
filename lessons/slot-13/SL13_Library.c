#include <stdio.h>
#include <ctype.h>

int main() {
    char S[30] = "$FPT University @2026$";
    int num = 0;
    int chr = 0;
    int space = 0;
    int o = 0;
    int i = 0;

    while (S[i] != '\0') {
        if (isalpha(S[i])) chr++;
        else if (isdigit(S[i])) num++;
        else if (isspace(S[i])) space++;
        else o++;
        i++;
    }

    printf("Number of digits: %d\n", num);
    printf("Number of characters: %d\n", chr);
    printf("Number of space: %d\n", space);
    printf("Number of special characters: %d\n", space);

}
