/*Escreva um algoritmo que leia as notas (1° e 2° Bimestre) e o sexo ('M': Masculino ou 'F': Feminino) de 
30 alunos e armazene os dados em (3) vetores apropriados. Após isso, exiba na tela:
*/

//40) A quantidade total de alunos que ficaram com média final entre [3.0, 7.0[.

#include<stdio.h>
#include<stdlib.h>
#define quantidade 30

int main(void){

  char sexo[quantidade],i;
  float nota1[quantidade], nota2[quantidade], media = 0, mediafinal[quantidade];

  for (int i = 0; i < quantidade; i++){
    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&nota1[i]);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&nota2[i]);
    
    mediafinal[i] = (nota1[i] + nota2[i]) / 2;
    }

    for (i = 0; i < quantidade; i++){
      if (mediafinal[i] >= 3 && mediafinal[i]<= 7){
          media++;
      } 
    }

    printf("a quantidade total de alunos que ficaram com a média entre 3 e 7 é: %f", media);
  return 0;
}

