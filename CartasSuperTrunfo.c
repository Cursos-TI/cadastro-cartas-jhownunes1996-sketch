#include <stdio.h>
#include <stdlib.h>

int main()
   {
char cidade[20], cidade2[20], estado[21], estado2[21]; //inserindo variaveis tipo caractere
int codigo, codigo2, populacao, populacao2, turisticos, turisticos2, super, super2; // inserindo variaveis tipo inteiro
float area, area2, pib, pib2, densidade, densidade2, capita, capita2; //tipo float/double

printf("carta 1 \n\n"); // dados da carta 1

printf("Estado: "); // impressão
scanf("%s", estado);      // declaração de variáveis

printf("codigo: ");
scanf("%d", &codigo);

printf("cidade: ");
scanf("%s", cidade); // String com mais de um caractere

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area); // tipo float

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &turisticos);

densidade = (float) populacao / area; // Calculo da densidade
capita = pib / populacao; // calculo da renda per capita

printf("Densidade Populacional: %.2f\n", densidade);

printf("PIB per Capita: %.2f\n", capita);


//Agora vai ser inserido os dados da carta 2
//=========================================


printf("\n\ncarta 2 \n\n"); //dados da carta 2

printf("Estado: "); //impressão
scanf("%s", estado2);      //declaração de variáveis

printf("codigo: ");
scanf("%d", &codigo2);

printf("cidade: ");
scanf("%s", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &turisticos2);

densidade2 = (float) populacao2 / area2;
capita2 = pib2 / populacao2;

printf("Densidade Populacional: %.2f\n", densidade2);

printf("PIB per Capita: %.2f\n", capita2);

printf("\nComparacao de Cartas:\n\n");

printf("Populacao: Carta 1 venceu (%d)\n", populacao > populacao2);
printf("Area: Carta 1 venceu (%d)\n", area > area2);
printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turisticos > turisticos2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade < densidade2);
printf("PIB per Capita: Carta 1 venceu (%d)\n", capita > capita2);
printf("Super Poder: Carta 1 venceu (%d)\n", super > super2);

    return 0; //função retorna um valor

   }
