#include <stdio.h>

int main() {
    int first = 0;

    int firstAddr = (int) &first;
    printf("%d\n", firstAddr);

    printf("%s\n", firstAddr % 5 == 0 ? "yes" : "no");

    return 0;
}