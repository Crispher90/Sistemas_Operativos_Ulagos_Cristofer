/*Guia de estudio N°1 - Ejercicio 5 - Cristofer Garcia*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, promedio;

    /*se pide las 4 notas*/ 
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);
    printf("Ingrese la cuarta nota: ");
    scanf("%f", &nota4);

    /*Calcular el promedio simple*/ 
    promedio = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("El promedio simple de las notas es: %.2f\n", promedio);

    return 0;
}
