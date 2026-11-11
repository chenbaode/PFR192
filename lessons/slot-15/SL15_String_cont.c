#include <stdio.h>
#include <ctype.h>

int main () {
    char S[100];
    if (fgets(S, sizeof(S), stdin) == NULL) {
        return 1;
    }
    int i;
    int count = 0;
    for (i = 0; S[i] != '\0'; i++) {
        char c = (char)tolower((unsigned char)S[i]);
        if (c == 'a' || c == 'u' || c == 'e' || c == 'o' || c == 'i') {
            count++;
        }
    }
    printf("So nguyen am: %d\n", count);
    return 0;
}
