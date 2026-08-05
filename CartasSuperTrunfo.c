#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1
  char estado1[2];
  char cod_carta1[4];
  char nome_cidade1[30];
  int populacao1;
  float area1;
  float PIB1;
  int n_pontos_turisticos1;

  // Carta 2
  char estado2[2];
  char cod_carta2[4];
  char nome_cidade2[30];
  int populacao2;
  float area2;
  float PIB2;
  int n_pontos_turisticos2;

  // Área para entrada de dados
  // ========== CARTA 1 ==========
  printf("--- Carta 1 ---\n");

  printf("Digite o estado: \n");
  scanf("%s", estado1);

  printf("Digite o código da carta: \n");
  scanf("%s", cod_carta1);

  printf("Digite o nome da cidade: \n");
  getchar();
  fgets(nome_cidade1, 30, stdin);
  nome_cidade1[strcspn(nome_cidade1, "\n")] = 0;

  printf("Digite a população: \n");
  scanf("%d", &populacao1);

  printf("Digite a área: \n");
  scanf("%f", &area1);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &n_pontos_turisticos1);

  // ========== CARTA 2 ==========
  printf("\n--- Carta 2 ---\n");

  printf("Digite o estado: \n");
  scanf("%s", estado2);

  printf("Digite o código da carta: \n");
  scanf("%s", cod_carta2);

  printf("Digite o nome da cidade: \n");
  getchar();
  fgets(nome_cidade2, 30, stdin);
  nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

  printf("Digite a população: \n");
  scanf("%d", &populacao2);

  printf("Digite a área: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &n_pontos_turisticos2);

  // Área para exibição dos dados da cidade
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s%s\n", estado1, cod_carta1);
  printf("Nome da Cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", PIB1);
  printf("Número de pontos turísticos: %d\n", n_pontos_turisticos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s%s\n", estado2, cod_carta2);
  printf("Nome da Cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", PIB2);
  printf("Número de pontos turísticos: %d\n", n_pontos_turisticos2);

return 0;
} 
