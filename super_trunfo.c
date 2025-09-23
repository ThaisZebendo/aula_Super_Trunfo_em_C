#include <stdio.h>
#include <stdlib.h>


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

    int escolha


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

//Comparação das cartas - implemento relativo a atividade do Nível Novato do tema Super Trunfo em C: desenvolvendo a lógica do jogo.
    //printf("Comparação de Cartas:\n\n");
    
    //População
    //printf("Atributo população\n");
    //if (populacao1 > populacao2) {
    //printf("Carta 1 - %s: %ld\n", cidade1, populacao1);
    //printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
    //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
//} else {
    //printf("Carta 1 - %s: %ld\n", cidade1, populacao1);
    //printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
    //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
//}

    //Área
    //printf("Atributo área\n");
    //if (area1 > area2) {
    //printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    //printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
//} else {
    //printf("Carta 1 - %s: %.2f\n", cidade1, area1);
    //printf("Carta 2 - %s: %.2f\n", cidade2, area2);
    //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
//}

    // PIB
    //printf("Atributo PIB\n");
    //if (pib1 > pib2) {
        //printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    //} else {
        //printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
        //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    //}

    // Pontos Turísticos
    //printf("Atributo Pontos Turísticos\n");
    //if (pontosturisticos1 > pontosturisticos2) {
        //printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
        //printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
        //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    //} else {
        //printf("Carta 1 - %s: %d\n", cidade1, pontosturisticos1);
        //printf("Carta 2 - %s: %d\n", cidade2, pontosturisticos2);
        //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    //}

    // Densidade (menor vence!)
    //printf("Atributo Densidade Populacional\n");
    //if (densidade1 < densidade2) {
        //printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
        //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    //} else {
        //printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);
        //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    //}

    // PIB per capita
    //printf("Atributo PIB per capita\n");
    //if (pibpercapita1 > pibpercapita2) {
        //printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
        printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    //} else {
        //printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
        //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    //}

    // Super Poder
    //printf("Atributo Super Poder\n");
    //if (superpoder1 > superpoder2) {
        //printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        //printf("A Carta 1 (%s) venceu!\n\n", cidade1);
    //} else {
        //printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
        //printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
        //printf("A Carta 2 (%s) venceu!\n\n", cidade2);
    //}

//Implemento de menu interativo - relativo a atividade do Nível Aventureiro do tema Super Trunfo em C: desenvolvendo a lógica do jogo.
//Criação do menu interativo:

    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

//Criação do switch
switch (escolha)
{
case 1: //população
    printf("\nEscolha - População\n");
    printf("&s: &ld x &s: &ld\n", cidade1, populacao1, cidade2, populacao2);
        if(populacao1 > populacao2)
            printf("Vence: &s\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");   
    break;

 case 2: // Área
    printf("\nComparação: Área\n");
    printf("%s: %.2f x %s: %.2f\n", cidade1, area1, cidade2, area2);
        if (area1 > area2)
            printf("Vence: %s\n", cidade1);
        else if (area2 > area1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
    break;

case 3: // PIB
     printf("\nComparação: PIB\n");
    printf("%s: %.2f x %s: %.2f\n", cidade1, pib1, cidade2, pib2);
        if (pib1 > pib2)
            printf("Vence: %s\n", cidade1);
        else if (pib2 > pib1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

case 4: // Pontos turísticos
    printf("\nComparação: Pontos Turísticos\n");
    printf("%s: %d x %s: %d\n", cidade1, pontosturisticos1, cidade2, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2)
            printf("Vence: %s\n", cidade1);
        else if (pontosturisticos2 > pontosturisticos1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

case 5: // Densidade demográfica (MENOR vence!)
    printf("\nComparação: Densidade Demográfica\n");
    printf("%s: %.2f x %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Vence: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

case 6: // PIB per capita
    printf("\nComparação: PIB per capita\n");
    printf("%s: %.2f x %s: %.2f\n", cidade1, pibpercapita1, cidade2, pibpercapita2);
        if (pibpercapita1 > pibpercapita2)
            printf("Vence: %s\n", cidade1);
        else if (pibpercapita2 > pibpercapita1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

case 7: // Super Poder
    printf("\nComparação: Super Poder\n");
    printf("%s: %.2f x %s: %.2f\n", cidade1, superpoder1, cidade2, superpoder2);
        if (superpoder1 > superpoder2)
            printf("Vence: %s\n", cidade1);
        else if (superpoder2 > superpoder1)
            printf("Vence: %s\n", cidade2);
        else
            printf("Empate!\n");
        break;

default:
    printf("\nOpção inválida! Tente novamente.\n");
    break;
}


  return 0;
}
