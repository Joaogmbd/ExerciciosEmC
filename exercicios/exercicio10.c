/* 
Escrever para cada item abaixo um programa em C que leia 100 valores inteiros positivos e guarde 
em um vetor. Após isso, faça:

10) Exibir na tela a quantidade de vezes que aparece o número 3.
*/

#include <stdio.h>
#define TAM 100

char vetor[TAM];
int i,a,b;

int main(void) {

  for(b = 0; b < 5; b++){
    printf("Entre com os caracteres: ");
    scanf("\n%[^\n]", vetor);

    while(vetor[i] != '\0'){
      if (vetor[i] == '3'){
         a++;
      }
      i++;
    }
     i = 0;
  }

  printf("O número 3 apareceu %i vezes.", a);

  return 0;
}