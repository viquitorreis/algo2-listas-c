#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;

    scanf("%d ", &first);
    scanf("%d", &second);

    int *ptrFirst = &first;
    int *ptrSecond = &second;

    printf("%d\n", first);
    printf("%d\n", second);

    printf("%p\n", ptrFirst);
    printf("%p\n", ptrSecond);

    // trocando valores pelos ponteiros
    ptrFirst = &second;
    ptrSecond = &first;

    printf("%d\n", first);
    printf("%d\n", second);

    printf("%p\n", ptrFirst);
    printf("%p\n", ptrSecond);

    return 0;
}