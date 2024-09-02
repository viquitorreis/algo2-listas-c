#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;
    int third = 0;

    scanf("%d ", &first);
    scanf("%d ", &second);
    scanf("%d", &third);

    int *ptrFirst = first > second ? &first : &second;
    int *ptrSecond = third > *ptrFirst ? &third : ptrFirst;

    printf("%d\n", *ptrSecond);

    return 0;
}