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