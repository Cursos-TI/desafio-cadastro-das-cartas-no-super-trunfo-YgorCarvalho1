#include <stdio.h>

int main() {
    printf("Desafio Xadrez!\n");
    printf("Novo commit\n");

    // INFORMAÇOES DAS CARTAS DO TRUNFO
    char estado;               //LETRAS DO ESTADO (A, B, C...)
    int cidade;                //NÚMERO DA CIDADE (1 A 4)
    int populacao;             //POPULAÇÃO DA CIDADE
    float area;                //ÁREA DA CIDADE EM KM²
    float pib;                 //PIB DA CIDADE
    int pontos;                //NÚMERO DE PONTOS TURÍSTICOS

    // BOAS VINDAS AO JOGADOR
    
    printf("SUPER TRUNFO DOS PAÍSES");
    printf("-----------------------");

    // CADASTRO DAS CARTAS

    printf("Digite a letra do estado (A-H):\n");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1-4):\n");
    scanf("%d", &cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area);
    printf("Digite a PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Digite os pontos turísticos da cidade:\n");
    scanf("%d", &pontos);
    

    // INFORMAÇÃO COMPLETA DA CARTA ESCOLHIDA

    printf("Estado: %c, Número/Cidade: %d, População: %d\n", estado, cidade, populacao);
    printf("Área: %.2f, PIB: %.2f, Pontos Turísticos: %d\n", area, pib, pontos);

    return 0;
}