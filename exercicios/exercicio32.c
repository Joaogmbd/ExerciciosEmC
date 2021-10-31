/*Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil (5 de amostra)
atletas que participaram das 10 Milhas Garoto. Armazene os dados em (2) vetores apropriados. Após 
isso, responda: */

//32) Exiba a matrícula dos atletas que ficaram abaixo da média de tempo da prova.

#include <stdio.h>

int main(void) {
  int matricula [25000], indice;
  float tempo[25000],media;

//repetição para entrada de dados (Matricula e Tempo)
  for (indice=0; indice<25000; indice++){ 
    printf("\nDigite a do atleta[%d]: ",indice + 1); 
    scanf("%d",&matricula[indice]);
    printf("Digite o tempo desse atleta(em horas): \n");
    scanf("%f", &tempo[indice]);
    }
//Calculo da Média
  for(indice =0; indice<25000; indice++){
      media = media + tempo[indice];
    }
    media = media/4;
//Exibição dos resultados
  for (indice = 0; indice < 25000; indice++){
    if(tempo[indice] < media){
      printf("O atleta de matrícula  %i ficou abaixo da média de tempo.\n", matricula[indice]);
    }
  }

return 0;
} 
