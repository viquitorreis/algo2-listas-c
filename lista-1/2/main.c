#include <stdio.h>

int main() {
    int first = 0;
    int second = 0;

    printf("%p\n", &first > &second ? &first : &second);

    return 0;
}