#include <stdio.h>

int main() {
    double vet[5];

    for (int i = 0; i < 5; ++i) {
        scanf("%lf", &vet[i]);
    }

    double *smallest = &vet[0];

    const int vetLen = sizeof(vet) / sizeof(vet[0]);

    for (int i = 1; i < vetLen; ++i) {
        if (vet[i] < *smallest) {
            smallest = &vet[i];
        }
    }

    printf("%lf\n", *smallest);

    return 0;
}