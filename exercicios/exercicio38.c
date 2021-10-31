/*Escreva um algoritmo que leia as notas (1° e 2° Bimestre) e o sexo ('M': Masculino ou 'F': Feminino) de 
30 alunos e armazene os dados em (3) vetores apropriados. Após isso, exiba na tela:
*/

//38) A maior média final do aluno do sexo Masculino

#include<stdio.h>
#include<stdlib.h>
#define quantidade 30

int main(void)
{
  char sexo[quantidade],i;
  float nota1[quantidade], nota2[quantidade], media, mediafinal[quantidade];

  for (int i = 0; i < quantidade; i++){
    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&nota1[i]);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f",&nota2[i]);

    printf("Escolha m para Masculino e f para Feminino: \n");
    scanf("%s", &sexo[i]); // Masculino = m , Feminino f;
    
    mediafinal[i] = (nota1[i] + nota2[i]) / 2;
    }


    for (i = 0; i < quantidade; i++){
      if(sexo[i] == 'm'){
        if(mediafinal[i] > media){
          media = mediafinal[i];
        }
      }
    }
  printf("a maior média final masculina foi: %f", media);
  //Saída

return 0;
}