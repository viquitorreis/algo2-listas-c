#include <stdio.h>

int main() {
    int arr[10];
    int *current = &arr[0];

    while (current < &arr[0] + 10) {
        scanf("%d", current);
        current++;
    }

    for (int i = 0; i < sizeof arr / sizeof arr[0]; ++i) {
        printf("%d\n", arr[i]);
    }

    return 0;
}