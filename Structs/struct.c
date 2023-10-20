#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char nombre[50];
    int edad;
    int id;
} Persona;

int main() {
    // Creación del array using dynamic memory allocation
    Persona *personas = (Persona *)malloc(sizeof(Persona) * 1000000);
    if (!personas) {
        printf("Memory allocation failed\n");
        return 1;
    }

    int i = 0;
    for(i = 0; i < 1000000; i++) {
        personas[i].edad = 25;
        personas[i].id = i;
        sprintf(personas[i].nombre, "Josue");
    }

    // Medición de tiempo de acceso
    clock_t start_time = clock();
    for(i = 0; i < 1000000; i++) {
        volatile int edad = personas[i].edad;
        volatile int id = personas[i].id;
    }

    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC * 1000;
    printf("Tiempo de acceso: %.2f ms\n", elapsed_time);

    free(personas);  // Liberar la memoria asignada
    return 0;
}
