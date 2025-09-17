#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  Char Estado1;
  Char Nome da Cidade1;
  Int População1;
  Float Área em km²1;
  Int Numero de pontos turisticos1;
  Char Código da carta1;

  
   Char Estado2;
  Char Nome da Cidade2;
  Int População2;
  Float Área em km²2;
  Int Numero de pontos turisticos2;
  Char Código da carta2;

  // Área para entrada de dados

  // Área para entrada de dados da Carta 2
printf("=== Cadastro da Carta 1 ===\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o Código da Carta (ex: A01): ");
scanf("%s", codigo1);
getchar(); // consome o \n que sobra

printf("Digite o Nome da Cidade: ");
fgets(cidade1, sizeof(cidade1), stdin);
cidade1[strcspn(cidade1, "\n")] = '\0';

printf("Digite a População: ");
scanf("%d", &populacao1);

printf("Digite a Área em km²: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o Número de Pontos Turísticos: ");
scanf("%d", &pontos1);


// Área para entrada de dados da Carta 1
printf("=== Cadastro da Carta 1 ===\n");
printf("Digite o Estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o Código da Carta (ex: A01): ");
scanf("%s", codigo1);
getchar(); // consome o \n que sobra

printf("Digite o Nome da Cidade: ");
fgets(cidade1, sizeof(cidade1), stdin);
cidade1[strcspn(cidade1, "\n")] = '\0';

printf("Digite a População: ");
scanf("%d", &populacao1);

printf("Digite a Área em km²: ");
scanf("%f", &area1);

printf("Digite o PIB: ");
scanf("%f", &pib1);

printf("Digite o Número de Pontos Turísticos: ");
scanf("%d", &pontos1);



  // Área para exibição dos dados da cidade

  // Área para exibição dos dados da cidade (Carta 1)
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);


// Área para exibição dos dados da cidade (Carta 2)
printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);


return 0;
} 
