#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
   {
char carta, cidade, estado ; //inserindo variaveis tipo caractere
int codigo, populacao, area, pib, turisticos; // inserindo variaveis tipo inteiro

printf("carta 1 \n\n"); // dados da carta 1

printf("Estado: ",estado); //impressão
scanf("%c", &estado);      //declaração de variáveis

printf("codigo: ",codigo);
scanf("%d", &codigo);

printf("cidade: ",cidade);
scanf(" %c", &cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de Pontos Turisticos: ");
scanf("%d", &turisticos);


//Agora vai ser inserido os dados da carta 2
//=========================================


printf("\n\ncarta 2 \n\n"); //dados da carta 2

printf("Estado: ",estado);  //impressão
scanf("%c", &estado);       //declaração de variáveis

printf("codigo: ",codigo);
scanf("%d", &codigo);

printf("cidade: ",cidade);
scanf(" %c", &cidade);

printf("Populacao: ");
scanf("%d", &populacao);

printf("Area: ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &pib);

printf("Numero de Pontos Turisticos ");
scanf("%d", &turisticos);

    return 0; //função retorna um valor 

   }
