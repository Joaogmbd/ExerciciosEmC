/* 
57) Dadas duas matrizes de inteiros A e B de ordem 4 x 3, fazer um programa C que gere uma matriz de 
zeros e uns denominada C, tal que o elemento C[i, j] seja verdadeiro (1 na linguagem C) se os elementos 
nas posições respectivas das matrizes A e B forem múltiplos e falso (0 na linguagem C), caso contrário. 
Exibir na tela a matriz C. As matrizes A e B recebem valores inteiros aleatórios, obrigatoriamente pares, 
no intervalo entre [2, 100].

A = 30  100 22      B = 6   10  10      C = 1   1   0
    50  8   66          80  50  22          0   0   1
    28  4   2           14  30  40          1   0   0
    40  20  90          100 20  30          0   1   1

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINES 4
#define COLUMNS 3

int main(void) {
  int matrizA[LINES][COLUMNS],matrizB[LINES][COLUMNS],matrizC[LINES][COLUMNS];
  int i, j;
  srand(time(NULL));
  for(i = 0; i < LINES; i++){
    for(j = 0; j < COLUMNS; j++){
        matrizA[i][j] = rand() % 50 * 2 + 2;
        matrizB[i][j] = rand() % 50 * 2 + 2;
    }
  }
  printf("Matriz A [%i][%i]:\n", LINES, COLUMNS);
  for(i = 0; i < LINES; i++){
    for(j = 0; j < COLUMNS; j++){
      printf("\t%i", matrizA[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("Matriz B [%i][%i]:\n", LINES, COLUMNS);
  for(i = 0; i < LINES; i++){
    for(j = 0; j < COLUMNS; j++){
      printf("\t%i", matrizB[i][j]);
    }
    printf("\n");
  }for(i = 0; i < LINES; i++){
    for(j = 0; j < COLUMNS; j++){
      if( matrizA[i][j] % matrizB[i][j] == 0){
      matrizC[i][j] = 1;
      }else{
      matrizC[i][j] = 0;
      }
    }
  }
  printf("Matriz C [%i][%i]:\n", LINES, COLUMNS);
  for(i = 0; i < LINES; i++){
    for(j = 0; j < COLUMNS; j++){
      printf("\t%i", matrizC[i][j]);
    }
    printf("\n");
  }
  return 0;
}
