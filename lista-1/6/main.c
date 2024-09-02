#include <stdio.h>

int main() {
    int a = 0;
    int *pa = &a;

    printf("%d\n", *pa);
    printf("%d\n", pa);

    int *ppa = &pa;

    printf("%d\n", *ppa);
    printf("%d\n", ppa);

    return 0;
}