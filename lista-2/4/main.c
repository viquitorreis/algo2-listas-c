#include <stdio.h>

int main() {
    void *ptr;
    int first;
    float second;
    double third;

    ptr = &first;
    // cast para int*
    scanf("%d", (int*) ptr);
    // pegando o valor do ponteiro int
    printf("%d\n", *(int*) ptr);
    
    ptr = &second;
    // cast para float*
    scanf("%f", (float*) ptr);
    // pegando o valor do ponteiro float
    printf("%f\n", *(float*) ptr);
    
    ptr = &third;
    // cast para double*
    scanf("%lf", (double*) ptr);
    // pegando o valor do ponteiro double
    printf("%lf\n", *(double*) ptr);

    return 0;
}