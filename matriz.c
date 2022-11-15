#include "matriz.h"
#include <stdio.h>
#include <string.h>

void recebeMatriz(char m[][col], int linha, int coluna) {
  int i;
  printf("Insira 5 palavras: ");
  for (i = 0; i < lin; i++) {
    fgets(m[i], sizeof(m[i]), stdin);
  }
  if(strlen(m[i]-1) == '\n'){
       m[i][strlen(m[i]-1)] = '\0';
    }
  printf("\n\n");
}


void apresentaMatriz(char m[lin][col], int linha, int coluna) {
  int i, j, compara;
  if(strlen(m[i]-1) == '\n'){
       m[i][strlen(m[i]-1)] = '\0';
    }
    for (i = 0; i < lin; i++){
      for (j = 0; j < i;j++){
        compara = strcmp(m[j], m[i]);
    if(compara == 0) m[i][j] = '\0';
    
   }
  }
  
  for (i = 0; i < lin; i++) {
      printf("%s", m[i]);  
  }
  
}
