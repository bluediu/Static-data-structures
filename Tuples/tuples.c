#include <stdio.h>
#include <time.h>

typedef struct {
    int entero;
    float flotante;
    char cadena[50];
} Tupla;

int main() {
    // Creación de la "tupla"
    Tupla tup = {123, 456.789, "Hello, World!"};

    // Medición de tiempo de acceso
    clock_t start_time = clock();
    for(int i = 0; i < 1000000; i++) {
        volatile int entero = tup.entero;
        volatile float flotante = tup.flotante;
        volatile char cadena = tup.cadena[0];
    }
    
    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC * 1000;
    printf("Tiempo de acceso: %.2f ms\n", elapsed_time);

    return 0;
}
