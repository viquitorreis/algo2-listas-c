#include <stdio.h>

int main() {
    float arr[10];
    for (int i = 0; i < (sizeof arr / sizeof arr[0]); ++i) {
        printf("%p\n", &arr[i]);
    }

    return 0;
}