#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;
    int current = 0;
    int input = 0;
    int *numbers = (int*) malloc(size * sizeof(int));
    if (numbers == 0x0) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    while (1) {
        if (current == size) {
            size += 10;
            int *temp = (int *) realloc(numbers, size * sizeof(int));
            if (temp == 0x0) {
                printf("Erro ao alocar memória\n");
                return 1;
            }

            numbers = temp;
        }

        printf("Digita o número %d: ", current + 1);
        scanf("%d", &input);

        if (input == 0) break;

        numbers[current] = input;
        current++;
    }

    printf("números no array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d \n", numbers[i]);
    } 

    return 0;
}