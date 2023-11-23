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
    for(int i = 0; i < 2000000; i++) {
        volatile int entero = tup.entero;
        volatile float flotante = tup.flotante;
        volatile char cadena = tup.cadena[0];
    }
    
    double elapsed_time = (double)(clock() - start_time) / CLOCKS_PER_SEC * 1000;
    printf("                 ,\n");
    printf("                /|      __\n");
    printf("               / |   ,-~ /\n");
    printf("              Y :|  //  /\n");
    printf("              | jj /( .^\n");
    printf("              >-\"~\"-v\"\n");
    printf("             /       Y\n");
    printf("            jo  o    |\n");
    printf("           ( ~T~     j\n");
    printf("            >._-' _./\n");
    printf("           /   \"~\"  |\n");
    printf("          Y     _,  |\n");
    printf("         /| ;-\"~ _  l\n");
    printf("        / l/ ,-\"~    \\\n");
    printf("        \\//\\/      .- \\\n");
    printf("         Y        /    Y\n");
    printf("         l       I     !\n");
    printf("         ]\\      _\\    /\"\\\n");
    printf("        (\" ~----( ~   Y.  )\n");
    printf("╔════════════════════════════════╗\n");
    printf("║         Tuplas en C           ║\n");
    printf("║--------------------------------║\n");
    printf("║ Tiempo de compilación: %.2f ms ║\n", elapsed_time);
    printf("╚════════════════════════════════╝\n");
    return 0;
}
