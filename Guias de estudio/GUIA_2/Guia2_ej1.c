/*Guia de estudio n°2 - Ejercicio 1 - Cristofer Garcia*/
#include <stdio.h>

void seleccion(int array[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++)
            if (array[j] < array[min])
                min = j;
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[5] = {64, 25, 12, 22, 11};
    int n = sizeof(array)/sizeof(array[0]);
    seleccion(array, n);
    printf("Arreglo ordenado: \n");
    for (int i=0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}
