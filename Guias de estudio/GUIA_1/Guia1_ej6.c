/*Guia de estudio N°1 - Ejercicio 6 - Cristofer Garcia*/
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, promedio;

    /*se pide las 3 notas a promediar*/ 
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    /*Calcular el promedio ponderado*/ 
    promedio = nota1 * 0.4 + nota2 * 0.3 + nota3 * 0.3;

    /*Determinar el estado del estudiante*/ 
    if (promedio < 3.95) {
        printf("El estudiante ha reprobado la asignatura.\n");
    } else if (promedio >= 3.95 && promedio < 4.95) {
        printf("El estudiante va a examen.\n");
    } else {
        printf("El alumno se exime de la asignatura.\n");
    }

    return 0;
}
