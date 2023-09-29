#include <stdio.h>

int main() {
    int num_notas;
    printf("Ingrese el número de notas: ");
    scanf("%d", &num_notas);

    double notas[num_notas];
    double pesos[num_notas];
    double suma_productos = 0.0;
    double suma_pesos = 0.0;

    for (int i = 0; i < num_notas; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%lf", &notas[i]);

        printf("Ingrese el peso para la nota %d: ", i + 1);
        scanf("%lf", &pesos[i]);

        suma_productos += notas[i] * pesos[i];
        suma_pesos += pesos[i];
    }

    if (suma_pesos > 0) {
        double promedio_ponderado = suma_productos / suma_pesos;
        printf("El promedio ponderado es: %.2lf\n", promedio_ponderado);
    } else {
        printf("No se ingresaron pesos válidos.\n");
    }

    return 0;
}