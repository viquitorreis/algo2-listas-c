#include <stdlib.h>

struct valores {
    int first;
    double second;
};

int main() {
    struct valores arr[4];
    struct valores *ptr = arr;

    for (int i = 0; i < 4; ++i) {
        scanf("%d %lf", &ptr[i].first, &ptr[i].second);
        printf("int: %d addr: %p double: %lf addr: %p\n", ptr[i].first, &ptr[i].first, ptr[i].second, &ptr[i].second);
        ptr++;
    }

    free(ptr);

    return 0;

    // for (int i = 0; i < 4)
}