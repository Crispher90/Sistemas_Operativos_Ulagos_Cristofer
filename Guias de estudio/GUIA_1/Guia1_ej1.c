/*Guia de estudio N°1 - Ejercicio 1 - Cristofer Garcia*/

#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int i = 1;

    while (count < 100) {
        if (i % 2 != 0) {
            sum += i;
            count++;
        }
        i++;
    }

    printf("La suma de los primeros 100 números impares es: %d\n", sum);

    return 0;
}
