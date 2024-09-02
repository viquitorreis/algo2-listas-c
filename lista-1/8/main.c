#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a = 0.0;
    float b = 0.0;

    scanf("%f ", &a);
    scanf("%f", &b);

    int aAddr = (int) a;
    int bAddr = (int) b;

    float calc = 0;

    if (aAddr % 3 == 0 && bAddr % 3 == 0) {
        calc = a + b;
    } else if (aAddr % 5 == 0 || bAddr % 5 == 0) {
        calc = a - b;
    } else if (abs(aAddr - bAddr) % 5 == 0) {
        calc = a * b;
    } else {
        calc = a / b;
    }

    printf("%f\n", calc);

    return 0;
}