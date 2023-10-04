/*Guia de estudio n°2 - Ejercicio 4 - Cristofer Garcia*/
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#define NUM_THREADS 10

DWORD WINAPI ThreadFunc(void* data) {
    unsigned int num;
    rand_s(&num);
    *(int*)data = (num % 20) + 1;
    return 0;
}

int main() {
    HANDLE threads[NUM_THREADS];
    int nums[NUM_THREADS] = {0};
    int sum = 0;

    // Crear 10 hilos
    for (int i = 0; i < NUM_THREADS; i++) {
        threads[i] = CreateThread(NULL, 0, ThreadFunc, &nums[i], 0, NULL);
        if (threads[i] == NULL) {
            printf("Error al crear el hilo.\n");
            return 1;
        }
    }

    // Esperar a que todos los hilos terminen
    WaitForMultipleObjects(NUM_THREADS, threads, TRUE, INFINITE);

    // Calcular la suma de los números generados
    for (int i = 0; i < NUM_THREADS; i++) {
        sum += nums[i];
    }

    printf("La suma de los números generados aleatoriamente por cada hilo es: %d\n", sum);

    return 0;
}

