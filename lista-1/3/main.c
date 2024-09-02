#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;

    int *ptrFirst = &first;
    int *ptrSecond = &second;

    scanf("%i ", ptrFirst);
    scanf("%i", ptrSecond);

    printf("%i\n", *ptrFirst > *ptrSecond ? *ptrFirst : *ptrSecond);

    return 0;
}