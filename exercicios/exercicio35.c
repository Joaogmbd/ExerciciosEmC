/*Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil (5 de amostra)
atletas que participaram das 10 Milhas Garoto. Armazene os dados em (2) vetores apropriados. Após 
isso, responda: */

//35) Exiba a matrícula dos atletas que ficaram abaixo da META da prova. A META da prova deste ano é 88.7 minutos. Declarar a META como constante com o comando #define.

#include <stdio.h>
#define meta 88.7 //define constante do tempo

int main(void) {
  int matricula [25000], indice;
  float tempo[25000],media;

//repetição para entrada de dados (Matricula e Tempo)
  for (indice=0; indice<25000; indice++){ 
    printf("\nDigite a Matrícula do atleta[%d]: ",indice + 1); 
    scanf("%d",&matricula[indice]);
    printf("Digite o tempo desse atleta(em minutos): \n");
    scanf("%f", &tempo[indice]);
    }

//Exibição dos resultados
  for (indice = 0; indice < 25000; indice++){
    if(tempo[indice] < meta){
      printf("O atleta de matrícula  %i ficou abaixo da média de tempo.\n", matricula[indice]);
    }
  }

return 0;
} 
