#include <stdio.h>

int main (){

//Informações Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;
    float invDensidade1;
    float superpoder1;

//Informações Carta 2
    char estado2; 
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;
    float invDensidade2;
    float superpoder2;

//Cadastro de Carta 1
    printf("Cadastro de Carta 1\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite a cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%ld", &populacao1);

    printf("Digite a área em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

//Cadastro de Carta 2
    printf("Cadastro de Carta 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Digite a cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%ld", &populacao2);

    printf("Digite a área em KM²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);
    
 // Cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;
    pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

    invDensidade1 = 1.0 / densidade1;
    invDensidade2 = 1.0 / densidade2;

    superpoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1
              + pibpercapita1 + invDensidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2
              + pibpercapita2 + invDensidade2;
              

//Exibição das Cartas
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %f\n\n", superpoder1);


    printf("Carta 2\n");
    printf("Estado:  %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %f\n\n", superpoder2);

//Comparação das cartas
    printf("Comparação de Cartas:\n\n");
    
    //População
    printf("Atributo população\n");
    if (populacao1 > populacao2) {
    printf("Carta 1 - %s: %ld\n", cidade1, populacao1);
    printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
    printf("A Carta 1 (%s) venceu!\n\n", cidade1);
} else {
    printf("Carta 1 - %s: %ld\n", cidade1, populacao1);
    printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
    printf("A Carta 2 (%s) venceu!\n\n", cidade2);
}

    //Área
    printf("Atributo área\n");
    if (area1 > area2) {
    printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    printf("A Carta 1 (%s) venceu!\n\n", cidade1);
} else {
    printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    printf("A Carta 2 (%s) venceu!\n\n", cidade2);
}

    // PIB
    printf("Atributo PIB\n");
    if (pib1 > pib2) {
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    }

    // Pontos Turísticos
    printf("Atributo Pontos Turísticos\n");
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
        printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
        printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
        printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    }

    // Densidade (menor vence!)
    printf("Atributo Densidade Populacional\n");
    if (densidade1 < densidade2) {
        printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
        printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    }

    // PIB per capita
    printf("Atributo PIB per capita\n");
    if (pibpercapita1 > pibpercapita2) {
        printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
        printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    }

    // Super Poder
    printf("Atributo Super Poder\n");
    if (superpoder1 > superpoder2) {
        printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
        printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    }


  return 0;
}
