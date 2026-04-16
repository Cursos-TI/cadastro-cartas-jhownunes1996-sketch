#include <stdio.h>
#include <stdlib.h>

int main()
   {
char carta[10], cidade[20], estado[21]; //inserindo variaveis tipo caractere
int codigo, populacao, turisticos; // inserindo variaveis tipo inteiro
float area, pib, densidade, capita; //tipo float/double

printf("carta 1 \n\n"); // dados da carta 1

printf("Estado: "); //impressão
scanf("%s", estado);      //declaração de variáveis

printf("codigo: ");
scanf("%d", &codigo);

printf("cidade: ");
scanf("%s", cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &turisticos);

densidade = (float) populacao / area;
capita = pib / populacao;

printf("Densidade Populacional: %.2f\n", densidade);

printf("PIB per Capita: %.2f\n", capita);


//Agora vai ser inserido os dados da carta 2
//=========================================


printf("\n\ncarta 2 \n\n"); //dados da carta 2

printf("Estado: "); //impressão
scanf("%s", estado);      //declaração de variáveis

printf("codigo: ");
scanf("%d", &codigo);

printf("cidade: ");
scanf("%s", cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &turisticos);

densidade = (float) populacao / area;
capita = pib / populacao;

printf("Densidade Populacional: %.2f\n", densidade);

printf("PIB per Capita: %.2f\n", capita);

    return 0; //função retorna um valor

   }
