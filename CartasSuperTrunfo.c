#include <stdio.h>

struct Carta {
    char estado[30];
    char codigo[4];
    char nomeCidade[30];
    unsigned long int populacao; // agora suporta valores grandes
    float area;
    float pib;

    // novos atributos derivados
    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Digite o estado: ");
    scanf("%s", carta1.estado);

    printf("Digite o código: ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    // Calcula atributos derivados
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pibPerCapita + (1.0 / carta1.densidade);

    // Cadastro da segunda carta
    printf("\nDigite o estado: ");
    scanf("%s", carta2.estado);

    printf("Digite o código: ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    // Calcula atributos derivados
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pibPerCapita + (1.0 / carta2.densidade);

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Densidade: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Densidade: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // Comparação de atributos
    printf("\n--- Resultados das Comparações ---\n");

    printf("População: %d\n", (carta1.populacao > carta2.populacao));
    printf("Área: %d\n", (carta1.area > carta2.area));
    printf("PIB: %d\n", (carta1.pib > carta2.pib));
    printf("PIB per Capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Densidade: %d\n", (carta1.densidade < carta2.densidade)); // menor vence
    printf("Super Poder: %d\n", (carta1.superPoder > carta2.superPoder));

    return 0;
}
