#include <stdio.h>
#include <stdlib.h>

int main(void) {
    /* Informações Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidade1;
    float pibpercapita1;
    float invDensidade1;
    float superpoder1;

    /* Informações Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2;
    float invDensidade2;
    float superpoder2;

    int atributo1, atributo2;

    /* Cadastro Carta 1 */
    printf("Cadastro de Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite a cidade: ");
    scanf("%49s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em Km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    /* Cadastro Carta 2 */
    printf("\nCadastro de Carta 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite a cidade: ");
    scanf("%49s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    /* Cálculos derivados */
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibpercapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    pibpercapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    invDensidade1 = 1.0f / densidade1;
    invDensidade2 = 1.0f / densidade2;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibpercapita1 + invDensidade1;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibpercapita2 + invDensidade2;

    /* Exibição das cartas */
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n\n", superpoder1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n\n", superpoder2);

    /* Escolha dos atributos */
    printf("\nEscolha os dois atributos para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica (menor vence)\n6 - PIB per capita\n7 - Super Poder\n");
    printf("Digite sua primeira escolha: ");
    scanf("%d", &atributo1);
    printf("Digite sua segunda escolha: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Escolhas inválidas! Você não pode escolher o mesmo atributo duas vezes.\n");
        return 0;
    }

    printf("\n\n  RESULTADO DAS COMPARAÇÕES   \n");

    /* Comparação individual do primeiro atributo */
    switch (atributo1) {
        case 1:
            printf("No atributo População:\n");
            if (populacao1 > populacao2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (populacao2 > populacao1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 2:
            printf("No atributo Área:\n");
            if (area1 > area2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (area2 > area1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 3:
            printf("No atributo PIB:\n");
            if (pib1 > pib2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pib2 > pib1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 4:
            printf("No atributo Pontos Turísticos:\n");
            if (pontosturisticos1 > pontosturisticos2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pontosturisticos2 > pontosturisticos1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 5:
            printf("No atributo Densidade Demográfica (menor vence):\n");
            if (densidade1 < densidade2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (densidade2 < densidade1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 6:
            printf("No atributo PIB per capita:\n");
            if (pibpercapita1 > pibpercapita2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 7:
            printf("No atributo Super Poder:\n");
            if (superpoder1 > superpoder2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (superpoder2 > superpoder1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        default:
            printf("Opção inválida no primeiro atributo.\n\n");
            break;
    }

    /* Comparação individual do segundo atributo */
    switch (atributo2) {
        case 1:
            printf("No atributo População:\n");
            if (populacao1 > populacao2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (populacao2 > populacao1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 2:
            printf("No atributo Área:\n");
            if (area1 > area2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (area2 > area1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 3:
            printf("No atributo PIB:\n");
            if (pib1 > pib2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pib2 > pib1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 4:
            printf("No atributo Pontos Turísticos:\n");
            if (pontosturisticos1 > pontosturisticos2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pontosturisticos2 > pontosturisticos1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 5:
            printf("No atributo Densidade Demográfica (menor vence):\n");
            if (densidade1 < densidade2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (densidade2 < densidade1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 6:
            printf("No atributo PIB per capita:\n");
            if (pibpercapita1 > pibpercapita2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (pibpercapita2 > pibpercapita1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        case 7:
            printf("No atributo Super Poder:\n");
            if (superpoder1 > superpoder2) printf("A Carta 1 (%s) venceu!\n\n", cidade1);
            else if (superpoder2 > superpoder1) printf("A Carta 2 (%s) venceu!\n\n", cidade2);
            else printf("Empate!\n\n");
            break;
        default:
            printf("Opção inválida no segundo atributo.\n\n");
            break;
    }

    /* --- Soma dos atributos escolhidos e decisão final --- */
    float valor1_carta1 = 0.0f, valor1_carta2 = 0.0f;
    float valor2_carta1 = 0.0f, valor2_carta2 = 0.0f;

    /* Preenche valores do primeiro atributo */
    switch (atributo1) {
        case 1: valor1_carta1 = (float)populacao1; valor1_carta2 = (float)populacao2; break;
        case 2: valor1_carta1 = area1;             valor1_carta2 = area2;             break;
        case 3: valor1_carta1 = pib1;              valor1_carta2 = pib2;              break;
        case 4: valor1_carta1 = (float)pontosturisticos1; valor1_carta2 = (float)pontosturisticos2; break;
        case 5: valor1_carta1 = densidade1;        valor1_carta2 = densidade2;        break;
        case 6: valor1_carta1 = pibpercapita1;     valor1_carta2 = pibpercapita2;     break;
        case 7: valor1_carta1 = superpoder1;       valor1_carta2 = superpoder2;       break;
        default: break;
    }

    /* Preenche valores do segundo atributo */
    switch (atributo2) {
        case 1: valor2_carta1 = (float)populacao1; valor2_carta2 = (float)populacao2; break;
        case 2: valor2_carta1 = area1;             valor2_carta2 = area2;             break;
        case 3: valor2_carta1 = pib1;              valor2_carta2 = pib2;              break;
        case 4: valor2_carta1 = (float)pontosturisticos1; valor2_carta2 = (float)pontosturisticos2; break;
        case 5: valor2_carta1 = densidade1;        valor2_carta2 = densidade2;        break;
        case 6: valor2_carta1 = pibpercapita1;     valor2_carta2 = pibpercapita2;     break;
        case 7: valor2_carta1 = superpoder1;       valor2_carta2 = superpoder2;       break;
        default: break;
    }

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\n--- Resultado Final pela Soma dos Atributos ---\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedora pela soma: Carta 1 (%s)\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedora pela soma: Carta 2 (%s)\n", cidade2);
    } else {
        printf("Empate na soma dos atributos!\n");
    }

    return 0;
}