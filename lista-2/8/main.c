#include <stdio.h>

struct ponteiros {
    int *first;
    float *second;
    char *third;
};

int main() {
    int number;
    float floatingNumber;
    char character;
    struct ponteiros ptr;

    ptr.first = &number;
    ptr.second = &floatingNumber;
    ptr.third = &character;

    printf("addr primária int: %p\n", ptr.first);
    printf("addr primária float: %p\n", ptr.second);
    printf("addr primária char: %p\n", ptr.third);

    return 0;
}