
/* Escrever para cada item abaixo um programa em C que preencha um vetor (TAMANHO: 100) de 
caracteres. Após isso, faça:

23) Exibir na tela os índices onde se encontram um caractere qualquer escolhido pelo usuário.
*/


#include <stdio.h>
#define TAM 100

int main(void) {
  char FRASE[TAM];
  char caracter;

  int i = 0, b = 0, pos_caracter = 0;
  printf("Digite aqui a sua frase: \n");
  scanf("\n%[^\n]", FRASE);

  printf("Digite aqui o caracter desejado: \n");
  scanf(" %c", &caracter);

    while(FRASE[i] != '\0'){    
      if(FRASE[i] == caracter){
        pos_caracter = i;
            printf("o caracter foi encontrado no índice %i do vetor. \n",pos_caracter);
    
      }
      i++;
    }
  return 0;
}