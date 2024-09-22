#include <stdio.h>

int fahrenheit(int celsius);

int main() {
    printf("Digite a temperatura em Celsius: ");
    int num = 0;
    scanf("%d", &num);

    printf("Temperatura em fahrenheit: %d\n", fahrenheit(num));

    return 0;    
}


int fahrenheit(int celsius) {
    return (celsius * (9.0/5.0)) + 32.0;
}