/* Escrever para cada item abaixo um programa em C que preencha um vetor (TAMANHO: 100) de 
caracteres. Após isso, faça:

21) Exibir na tela quantas vezes aparece no vetor o caractere: '@'.
*/


#include <stdio.h>
#define TAM 100

int main(void) {
  char TEXTO[TAM];
  char caracter = '@';
  int i = 0, Ql = 0;

  printf("DIgite aqui o seu Texto: ");
  scanf("\n%[^\n]",TEXTO);

while (TEXTO[i] != '\0'){
  if (TEXTO[i] == caracter)
    Ql++;
  i++;
}

printf("O caracter '@' aparece no texto digitado %i vezes.", Ql);
  return 0;
}