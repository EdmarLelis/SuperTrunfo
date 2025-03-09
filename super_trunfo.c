#include <stdio.h>
#include <ctype.h>

int main()
{
  char estado_carta_1, 
  estado_carta_2;

  char codigo_carta_1[3], 
  codigo_carta_2[3];

  char codigo_completo_carta_1[4], codigo_completo_carta_2[4];

  char cidade_carta_1[50], 
  cidade_carta_2[50];

  int populacao_carta_1, pts_turisticos_carta_1, 
  populacao_carta_2, pts_turisticos_carta_2;

  float area_carta_1, PIB_carta_1, 
  area_carta_2, PIB_carta_2;


//Cadastro carta 1
  printf("\n-----------Carta 01----------- \n");
  printf("Indique uma letra de 'A' a 'H' (representando um dos oito estados) para a carta 1: ");
  scanf(" %c", &estado_carta_1);
  estado_carta_1 = toupper(estado_carta_1);

  printf("\nIndique um numero de 01 a 04 para complementar o codigo da carta 1: ");
  scanf(" %2s", codigo_carta_1);
  snprintf(codigo_completo_carta_1, sizeof(codigo_completo_carta_1), "%c%s", estado_carta_1, codigo_carta_1);

  printf("\nIndique o nome da cidade para a carta 1: ");
  getchar(); 
  fgets(cidade_carta_1, sizeof(cidade_carta_1), stdin);

  printf("\nIndique a populacao da cidade para a carta 1: ");
  scanf("%d", &populacao_carta_1);

  printf("\nIndique area da cidade em quilometros quadrados da cidade para a carta 1: ");
  scanf("%f", &area_carta_1);

  printf("\nIndique o PIB da cidade para a carta 1: ");
  scanf("%f", &PIB_carta_1);

  printf("\nIndique a quantidade de pontos turisticos na cidade para a carta 1: ");
  scanf("%d", &pts_turisticos_carta_1);


//Cadastro carta 2
  printf("\n\n-----------Carta 02----------- \n");
  printf("Indique uma letra de 'A' a 'H' (representando um dos oito estados) para a carta 2: ");
  scanf(" %c", &estado_carta_2);
  estado_carta_2 = toupper(estado_carta_2);

  printf("\nIndique um numero de 01 a 04 para complementar o codigo da carta 2: ");
  scanf(" %2s", codigo_carta_2);
  snprintf(codigo_completo_carta_2, sizeof(codigo_completo_carta_2), "%c%s", estado_carta_2, codigo_carta_2);

  printf("\nIndique o nome da cidade para a carta 2: ");
  getchar(); 
  fgets(cidade_carta_2, sizeof(cidade_carta_2), stdin);

  printf("\nIndique a populacao da cidade para a carta 2:");
  scanf("%d", &populacao_carta_2);

  printf("\nIndique area da cidade em quilometros quadrados da cidade para a carta 2: ");
  scanf("%f", &area_carta_2);

  printf("\nIndique o PIB da cidade para a carta 2: ");
  scanf("%f", &PIB_carta_2);

  printf("\nIndique a quantidade de pontos turisticos na cidade para a carta 2: ");
  scanf("%d", &pts_turisticos_carta_2);


  //Exibição de cartas:
  printf("\n\n----------- Exibicao de cartas -----------\n\n");
  printf("Carta 1: \nEstado: %c \nCodigo: %s \nNome da cidade: %sPopulacao: %d \nArea: %.2f km quadrados \nPIB: %.2f bilhoes de reais \nNumero de Pontos Turisticos: %d \n", estado_carta_1, codigo_completo_carta_1, cidade_carta_1, populacao_carta_1, area_carta_1, PIB_carta_1, pts_turisticos_carta_1);
  printf("\n\nCarta 2: \nEstado: %c \nCodigo: %s \nNome da cidade: %sPopulacao: %d \nArea: %.2f km quadrados \nPIB: %.2f bilhoes de reais \nNumero de Pontos Turisticos: %d \n", estado_carta_2, codigo_completo_carta_2, cidade_carta_2, populacao_carta_2, area_carta_2, PIB_carta_2, pts_turisticos_carta_2);

  return 0;
}
