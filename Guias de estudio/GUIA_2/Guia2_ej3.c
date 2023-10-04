/*Guia de estudio n°2 - Ejercicio 3 - Cristofer Garcia*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>

#define NUM_CHILDREN 50

int main() {
    pid_t pid;
    int status;
    clock_t start, end;
    double total_time = 0;

    for (int i = 0; i < NUM_CHILDREN; i++) {
        start = clock();
        pid = fork();
        end = clock();

        if (pid == -1) {
            printf("Error al crear el proceso hijo.\n");
            return 1;
        } else if (pid == 0) {
            // Este es el proceso hijo
            printf("Soy el proceso hijo con PID %d y mi padre tiene PID %d.\n", getpid(), getppid());
            return 0;
        } else {
            // Este es el proceso padre
            printf("Soy el proceso padre con PID %d y he creado un hijo con PID %d.\n", getpid(), pid);
            total_time += ((double) (end - start)) / CLOCKS_PER_SEC;
        }
    }

    // Esperar a que todos los hijos terminen
    while ((pid = wait(&status)) > 0);

    printf("Tiempo medio de creación de procesos: %.6f segundos.\n", total_time / NUM_CHILDREN);

    return 0;
}
