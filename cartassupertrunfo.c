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

     // calculo densidade populacional e pib per capita da carta 1 

    float densidade1 = (populacao1 * 213.4  / area1 * 331.354 );  
    float pib_per_capita1 = (pib1 * 105.8 / populacao1 * 213.4 );

   // calculo densidade populacional e pib per capita da carta 2

    float densidade2 = (populacao2 * 6.730  / area2 * 1200.329 );
    float pib_per_capita2 = (pib2 * 71.849 / populacao2 * 6.730 );


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
    printf("PIB per capita: %.2f bi/mi\n", pib_per_capita1);

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

    
    return 0;

}
