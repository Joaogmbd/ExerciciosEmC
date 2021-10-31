/* 
Escrever para cada item abaixo um programa em C que preencha um vetor (TAMANHO: 100) de 
caracteres. Após isso, faça:

20) Exibir na tela os índices onde se encontram os caracteres: 'C' ou '@'
*/

#include <stdio.h>
#define TAM 100

char vetor[TAM];
int i, a;

int main(void) {

  printf("Entre com os caracteres: ");
  scanf("\n%[^\n]", vetor);

  while(vetor[i] != '\0'){
      if (vetor[i] == 'C'){
        a = i;
        printf("O índice do Caracter C está na posição: %i\n", a + 1);
        //break;
      }if (vetor[i] == '@'){
        a = i;
        printf("O índice do Caracter @ está na posição: %i\n", a + 1);
      }
      i++;
    }

  return 0;
}