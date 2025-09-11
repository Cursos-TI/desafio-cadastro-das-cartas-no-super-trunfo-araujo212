#include <stdio.h>


int main() { 

    char codigo1[50] ="A01";
    char estado1[50] = "A";
    char cidade1[50] = "belo horizonte";
    float populacao1 = 213.4;            // em milhões
    float area1 = 331.354;               // em mil km2
    float pib1 = 105.8;                  // em bilhoes reais
    int PT1 = 25;                        // Pontos turisticos

    char codigo2[50] ="B02";
    char estado2[50] = "B";
    char cidade2[50] = "rio de janeiro";
    float populacao2 = 6.730;            // em milhões
    float area2 = 1200.329;              // em mil km2
    float pib2 = 71.849;                 // em bilhoes reais
    int PT2 = 30;                        // Pontos turistico

    // calculo densidade populacional e pib per capita da carta 1 
    double densidade1 = (populacao1 * 1000000) / (area1 * 1000); // hab/km²
    double pib_per_capita1 = (pib1 * 1000000000) / (populacao1 * 1000000); // reais/pessoa

    // calculo densidade populacional e pib per capita da carta 2
    double densidade2 = (populacao2 * 1000000) / (area2 * 1000); // hab/km²
    double pib_per_capita2 = (pib2 * 1000000000) / (populacao2 * 1000000); // reais/pessoa

    // Cálculo do Super Poder
    float superPoder1 = populacao1 + area1 + pib1 + PT1 + pib1 + (1.0 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + PT2 + pib2 + (1.0 / densidade2);


    // caracteristicas do local 1
    printf("\n___1 carta___\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.1f mi\n", populacao1);
    printf("Area: %.2f mil km2\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos Turisticos: %d\n", PT1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais/pessoa\n", pib_per_capita1);

    // caracteristicas do local 2
    printf("\n___2 carta___\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.1f mi\n", populacao2);
    printf("Area: %.2f mil km2\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos Turisticos: %d\n", PT2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f bi/mi\n", pib_per_capita2);

    // comparacao dos super poderes
    // Comparação de cartas
    printf("\n___ Comparação de Cartas ___\n");
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2",
           (populacao1 > populacao2) ? 1 : 0);
    printf("Área: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : "Carta 2",
           (area1 > area2) ? 1 : 0);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2",
           (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turísticos: %s venceu (%d)\n", (PT1 > PT2) ? "Carta 1" : "Carta 2",
           (PT1 > PT2) ? 1 : 0);

    // Para densidade, menor vence

    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2",
           (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: %s venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? "Carta 1" : "Carta 2",
           (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
    printf("Super Poder: %s venceu (%d)\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2",
           (superPoder1 > superPoder2) ? 1 : 0);

    return 0;

}
