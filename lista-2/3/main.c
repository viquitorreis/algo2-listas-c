#include <stdio.h>

int main() {
    int arr[5];
    int *currAddr = &arr[0];

    while (currAddr < (&arr[0] + 5)) {
        scanf("%d", currAddr);
        printf("double: %d\n", *currAddr * 2);
        currAddr++;
    }

    return 0;
}