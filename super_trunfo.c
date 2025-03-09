#include <stdio.h>
#include <ctype.h>

int main()
{
  // Declaração de variáveis para armazenar os dados das cartas
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


  // Cadastro carta 1
  printf("\n-----------Carta 01----------- \n");
  printf("Indique uma letra de 'A' a 'H' (representando um dos oito estados) para a carta 1: ");
  scanf(" %c", &estado_carta_1); // Lê um único caractere
  estado_carta_1 = toupper(estado_carta_1); // Converte o caractere para maiúscula

  printf("\nIndique um numero de 01 a 04 para complementar o codigo da carta 1: ");
  scanf(" %2s", codigo_carta_1); // Lê uma string de até 2 caracteres

  snprintf(codigo_completo_carta_1, sizeof(codigo_completo_carta_1), "%c%s", estado_carta_1, codigo_carta_1); 
  // Concatena o estado com o número para formar o código completo da carta

  printf("\nIndique o nome da cidade para a carta 1: ");
  getchar(); // Consome o '\n' deixado pelo scanf anterior
  fgets(cidade_carta_1, sizeof(cidade_carta_1), stdin); // Lê a string da cidade permitindo espaços

  printf("\nIndique a populacao da cidade para a carta 1: ");
  scanf("%d", &populacao_carta_1); // Lê um número inteiro para a população

  printf("\nIndique area da cidade em quilometros quadrados da cidade para a carta 1: ");
  scanf("%f", &area_carta_1); // Lê um número decimal para a área

  printf("\nIndique o PIB da cidade para a carta 1: ");
  scanf("%f", &PIB_carta_1); // Lê um número decimal para o PIB

  printf("\nIndique a quantidade de pontos turisticos na cidade para a carta 1: ");
  scanf("%d", &pts_turisticos_carta_1); // Lê um número inteiro para os pontos turísticos


  // Cadastro carta 2
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


  // Exibição de cartas:
  printf("\n\n----------- Exibicao de cartas -----------\n\n");
  printf("Carta 1: \nEstado: %c \nCodigo: %s \nNome da cidade: %sPopulacao: %d \nArea: %.2f km quadrados \nPIB: %.2f bilhoes de reais \nNumero de Pontos Turisticos: %d \n", 
    estado_carta_1, codigo_completo_carta_1, cidade_carta_1, populacao_carta_1, area_carta_1, PIB_carta_1, pts_turisticos_carta_1); 
  // Exibe os dados da primeira carta

  printf("\n\nCarta 2: \nEstado: %c \nCodigo: %s \nNome da cidade: %sPopulacao: %d \nArea: %.2f km quadrados \nPIB: %.2f bilhoes de reais \nNumero de Pontos Turisticos: %d \n", 
    estado_carta_2, codigo_completo_carta_2, cidade_carta_2, populacao_carta_2, area_carta_2, PIB_carta_2, pts_turisticos_carta_2);
  // Exibe os dados da segunda carta

  return 0; // Indica que o programa finalizou corretamente
}
