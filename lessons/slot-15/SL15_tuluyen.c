
#include <stdio.h>
#include <ctype.h>

int main() {
    char S[30] = "F2P8T U5n4iver9sity 2026@";
    puts(S);
    printf("\nOUTPUT\n");
    int i = 0;
    while (S[i] != '\0') {
        if (isalpha(S[i]) || isspace(S[i])) {
            printf("%c", S[i]);
        }
        i++;
    }

    int sum = 0;
    i = 0;
    printf("\n");
    while (S[i] != '\0') {
        if (isdigit(S[i])) {
            sum += S[i];
            printf("%c", S[i]);
        }
        i++;
    }
    printf("\n");
    printf("%d\n", sum);
    
    return 0;
}