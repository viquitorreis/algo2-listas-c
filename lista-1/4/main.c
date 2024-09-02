#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;

    scanf("%d ", &first);
    scanf("%d", &second);

    int *ptrFirst = &first;
    int *ptrSecond = &second;

    printf("%d\n", *ptrFirst); 
    printf("%d\n", *ptrSecond);

    // trocando endereços dos ponteiros
    ptrFirst = &second;
    ptrSecond = &first;

    printf("%d\n", *ptrFirst); 
    printf("%d\n", *ptrSecond);

    return 0;
}