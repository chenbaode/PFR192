#include <stdio.h>

int main() {
    char S[31], S1[31], S2[31];
    printf("Input a string: ");
    scanf("%[^\n]", S);
    printf("%s", S);
    getchar();
    printf("\nInput a string S1: "); scanf("%[abc]", &S1);
    printf("%s", S1);
    getchar();
    getchar();
    printf("\n Input a string S2: "); scanf("%[^abc]", &S2);
    printf("%s", S2);

    return 0;
}