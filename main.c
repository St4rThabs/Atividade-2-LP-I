#include <stdio.h>
#include "matriz.h"

int main(void) {
  char m[lin][col];
  recebeMatriz(m, lin, col);
  printf("Matriz de Strings: ");
  apresentaMatriz(m, lin, col);
  return 0;
}