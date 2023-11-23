#include <stdio.h>
#include <stdint.h>
#include <time.h>

// Testing: https://www.programiz.com/c-programming/online-compiler/

int main() {
  int arr_size = 2000000;
  int arr[arr_size];
  // Creación de un array de un millón de enteros
  for (int i = 0; i < arr_size; i++) {
    arr[i] = i;
  }

  clock_t start_time = clock();
  for (int i = 0; i < arr_size; i++) {
    /*
    `volatile: Es un calificador de tipo que le dice al compilador que 
    una variable puede cambiar en cualquier momento sin ninguna acción 
    aparente en el código que el compilador encuentra.
    */
    volatile int x  = arr[i];
  }

  // Convertir a milisegundos
  double elapsed_time = ((double)(clock() - start_time) / CLOCKS_PER_SEC) * 1000;  

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
  printf("║         Arrays en C           ║\n");
  printf("║--------------------------------║\n");
  printf("║ Tiempo de compilación: %.2f ms ║\n", elapsed_time);
  printf("╚════════════════════════════════╝\n");

  return 0;
}