#include <stdio.h>

int main() {
    int inteiro = 0;
    float real = 0.0;
    char character = 'a';

    int *ptrInt = &inteiro;
    float *ptrReal = &real;
    char *ptrChar = &character;

    *ptrInt = 10;
    *ptrReal = 10.10;
    *ptrChar = 'v';

    printf("%i\n", inteiro);
    printf("%f\n", real);
    printf("%c\n", character);

    return 0;
}