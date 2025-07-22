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
    printf("Cidade: %c\n", cidade1);
    printf("Populaçao: %s\n", populacao1);
    printf("Area: %c\n", area1);
    printf("Pib: %s\n", pib1);
    printf("pontos: %s\n", pontos1);





      printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da carta 2: ");
    scanf(" %c", &codigo2);

    printf("Digite a Cidade da carta 2: ");
    scanf(" %s", &cidade2);

    printf("Digite o tamanho da população da carta 2: ");
    scanf(" %d", &populacao2);

    printf("Digite a area da carta 2: ");
    scanf(" %f", &area2);

    printf("Digite o pib da carta 2: ");
    scanf(" %f", &pib2);

    printf("Digite o pontos turisticos da carta 2: ");
    scanf(" %d", &pontos2);


    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %c\n", cidade2);
    printf("Populaçao: %s\n", populacao2);
    printf("Area: %c\n", area2);
    printf("Pib: %s\n", pib2);
    printf("pontos: %s\n", pontos2);
    
    return 0;
}
