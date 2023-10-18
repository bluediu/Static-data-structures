#include <stdio.h>
#include <stdint.h>
#include <time.h>

// Testing: https://www.programiz.com/c-programming/online-compiler/

int main() {
  int arr_size = 1000000;
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

  printf("Tiempo de acceso: %.2f ms\n", elapsed_time);
  return 0;
}