#include <stdio.h>

int main() {
//  Dados da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //  Dados da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da carta 1: ");
    scanf(" %c", &codigo1);

    printf("Digite a Cidade da carta 1: ");
    scanf(" %s", &cidade1);

    printf("Digite o tamanho da população da carta 1: ");
    scanf(" %d", &populacao1);

    printf("Digite a area da carta 1: ");
    scanf(" %f", &area1);

    printf("Digite o pib da carta 1: ");
    scanf(" %f", &pib1);

    printf("Digite o pontos turisticos da carta 1: ");
    scanf(" %d", &pontos1);


    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);

    return 0;
}
