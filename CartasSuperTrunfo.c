#include <stdio.h>
#include <string.h>

int main() {
    // Carta 1
    char estado1[2];
    char cod_carta1[4];
    char nome_cidade1[30];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int n_pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capita1;
    float super_poder1;

    // Carta 2
    char estado2[2];
    char cod_carta2[4];
    char nome_cidade2[30];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int n_pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float super_poder2;
    
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &n_pontos_turisticos2);

    densidade_populacional1 = (float) populacao1 / area1; // Densidade populacional é a população dividida pela área
    PIB_per_capita1 = (PIB1 * 1000000000.0) / populacao1; // PIB per capita é o PIB dividido pela população

    densidade_populacional2 = (float) populacao2 / area2; // Densidade populacional é a população dividida pela área
    PIB_per_capita2 = (PIB2 * 1000000000.0) / populacao2; // PIB per capita é o PIB dividido pela população
    
    // Super poder é a soma de todos os atributos da carta
    super_poder1 = populacao1 + area1 + PIB1 + n_pontos_turisticos1 + PIB_per_capita1 + (1/densidade_populacional1);
    super_poder2 = populacao2 + area2 + PIB2 + n_pontos_turisticos2 + PIB_per_capita2 + (1/densidade_populacional2);

    // ========== EXIBIÇÃO ==========
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f reais\n", PIB_per_capita2);

    // ========== COMPARAÇÃO ==========
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2), (PIB1 > PIB2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (n_pontos_turisticos1 > n_pontos_turisticos2), (n_pontos_turisticos1 > n_pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2), (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB_per_capita1 > PIB_per_capita2), (PIB_per_capita1 > PIB_per_capita2));
    printf("Super poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2), (super_poder1 > super_poder2));

    return 0;
}