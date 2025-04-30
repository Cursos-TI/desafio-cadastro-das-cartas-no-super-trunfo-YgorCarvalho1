#include <stdio.h>

int main(){
    printf("**Super Mega Trunfo** \n");
    printf("Sejam bem vindos ao meu jogo! \n");

    char estado1;            // estado que quiser
    char codigo1[10];        // código da carta
    char cidade1[20];        // cidade que quiser
    int populacao1;          // população da cidade
    float area1;             // área da cidade
    float pib1;              // pib da cidade
    int pontos1;             // pontos turísticos
    float densidade1;        // habitantes por km²
    float pib9;             // dinheiro

    // inicio
    printf("Ola jogador, por favor preencha os dados pedidos: \n");
    printf("------------------------------------------------ \n");

    // cadastro da carta 1
    printf("Primeira Carta \n");
    printf("-------------- \n");

    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: km ");
    scanf("%f", &area1);
    printf("PIB: bilhoes de reais ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);
 
    densidade1 = (float) populacao1 / area1;
    pib9 = (float) (pib1 * 1000000000) / populacao1;
 
    printf("\n Dados da Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km \n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib9);

    // cadastro da carta 2
    char estado2;
    char codigo2[10];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pib0;

    printf("Segunda Carta \n");
    printf("-------------- \n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: km ");
    scanf("%f", &area2);
    printf("PIB: bilhoes de reais ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);
 
    densidade2 = (float) populacao2 / area2;
    pib0 = (float) (pib2 * 1000000000) / populacao2;
 
    printf("\n Dados da Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km \n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib0);

    return 0;
}
