#include <stdio.h>


int main() { 

    char codigo1[50] ="A01";
    char estado1[50] = "A";
    char cidade1[50] = "belo horizonte";
    float populacao1 = 213.4;    // em milhões
    float area1 = 331.354;       // em mil km2
    float pib1 = 105.8;         // em bilhoes reais
    int PT1 = 25;            // Pontos turisticos

    char codigo2[50] ="B02";
    char estado2[50] = "B";
    char cidade2[50] = "rio de janeiro";
    float populacao2 = 6.730;    // em milhões
    float area2 = 1200.329;       // em mil km2
    float pib2 = 71.849;         // em bilhoes reais
    int PT2 = 30;            // Pontos turistico

    // caracteristicas do local 1
    printf("\n___1 carta___\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %.1f mi\n", populacao1);
    printf("Area: %.2f mil km2\n", area1);
    printf("PIB: %.2f bi\n", pib1);
    printf("Pontos Turisticos: %d\n", PT1);

    // caracteristicas do local 2
    printf("\n___2 carta___\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %.1f mi\n", populacao2);
    printf("Area: %.2f mil km2\n", area2);
    printf("PIB: %.2f bi\n", pib2);
    printf("Pontos Turisticos: %d\n", PT2);

    
    return 0;

}
