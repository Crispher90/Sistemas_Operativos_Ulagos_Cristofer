/*Guia de estudio N°1 - Ejercicio 4 - Cristofer Garcia*/
#include <stdio.h>
#include <math.h>

int main() {
    int lado1, lado2, lado3;
    int perimetro;
    double semiperimetro, area;

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

    /*Calcular el perímetro, semiperímetro y área segun la formula de heron */ 
    perimetro = lado1 + lado2 + lado3;
    semiperimetro = perimetro / 2.0;
    area = sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));

    printf("Perímetro del triángulo: %d\n", perimetro);
    printf("Semiperímetro del triángulo: %.2f\n", semiperimetro);
    printf("Área del triángulo: %.2f\n", area);

    return 0;
}
