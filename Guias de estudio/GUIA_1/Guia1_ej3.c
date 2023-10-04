/*Guia de estudio N°1 - Ejercicio 3 - Cristofer Garcia*/
#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    /*se pide los lados del triángulo*/ 
    printf("Ingrese el primer lado del triángulo: ");
    scanf("%d", &lado1);
    printf("Ingrese el segundo lado del triángulo: ");
    scanf("%d", &lado2);
    printf("Ingrese el tercer lado del triángulo: ");
    scanf("%d", &lado3);

    /*Determinar el tipo de triángulo*/ 
    if (lado1 == lado2 && lado2 == lado3) {
        printf("El triángulo es equilátero.\n");
    } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        printf("El triángulo es escaleno.\n");
    } else {
        printf("El triángulo es isósceles.\n");
    }

    return 0;
}
