#include <stdio.h>
#include <math.h>

// Função principal
int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados para a primeira carta
    printf("Informe os dados da primeira carta:\n");

    printf("Estado (ex: SP, RJ): ");
    scanf("%s", estado1);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População (número completo): ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Declaração das variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a segunda carta
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (ex: MG, BA): ");
    scanf("%s", estado2);

    printf("Código da Carta (Ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População (número completo): ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo dos atributos adicionais
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * pow(10,9) / populacao1;
    
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * pow(10,9) / populacao2;

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    // **Escolha fixa do atributo de comparação** (por exemplo, População)
    printf("\n🔍 Comparação de Cartas (Atributo: População)\n");

    // **Lógica de comparação usando if-else**
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu com %d habitantes!\n", nomeCidade1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu com %d habitantes!\n", nomeCidade2, populacao2);
    } else {
        printf("\nResultado: Empate! Ambas as cidades possuem %d habitantes.\n", populacao1);
    }

    return 0;
}
