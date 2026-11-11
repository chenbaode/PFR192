#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int nVowels = 0;
    int nConsonants = 0;
    int nOthers = 0;
    char ch;

    do {
        printf("Enter character: ");
        ch = getchar();
        ch = toupper(ch);

        if (ch >= 'A' && ch <= 'Z') {
            switch (ch) {
                case 'A':
                nVowels++;
                break;
                case 'E':
                nVowels++;
                break;
                case 'I':
                nVowels++;
                break;
                case 'O':
                nVowels++;
                break;
                case 'U':
                nVowels++;
                break;
                default:
                nConsonants++;
            }
        } else {
            nOthers++;
        }
    } while (ch != '\n');

    printf("Number of vowels: %d\n", nVowels);
    printf("Number of Consonants: %d\n", nConsonants);
    printf("Number of nOther: %d\n", nOthers);
}