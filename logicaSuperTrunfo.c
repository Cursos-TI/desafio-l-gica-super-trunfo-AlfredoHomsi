#include <stdio.h>
int main() {
//variaveis↓
    
    int  pontos_turisticos1, pontos_turisticos2;
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade_populacional1= populacao1 / area1;
    float densidade_populacional2= populacao2 / area2;
//operadores matematicos↓
    float pib_per_capita1= pib1 / populacao1;
    float pib_per_capita2= pib2 / populacao2;
    float super_poder1= populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 / 1;
    float super_poder2= populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 / 1;
    char nome1[50], nome2[50], estado1[50], estado2[50], codigo1[50], codigo2[50];
//funções para coletar os dados da primeira carta↓
    printf("Digite o nome da primeira carta: \n");
    scanf("%s", &nome1);

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", &estado1);

    printf("Digite a população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite o numero de pontos turisticos de primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite a area em KM² da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o codigo da primeira carta: \n");
    scanf("%s", &codigo1);
//funções para a coleta de dados da segunda carta
    printf("Digite o nome da segunda carta: \n");
    scanf("%s", &nome2);

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", &estado2);

    printf("Digite a população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite o numero de pontos turisticos de segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a area em KM² da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o codigo da segunda carta: \n");
    scanf("%s", &codigo2);
//funções para a exibição dos dados coletados↓
    printf("-Nome da cidade da primeira carta: \n %s \n", nome1);
    printf("-Estado da primeira carta: \n %s \n", estado1);
    printf("-População da primeira carta: \n %d \n", populacao1);
    printf("-Numero de pontos turisticos da primeira carta: \n %d \n", pontos_turisticos1);
    printf("-PIB da primeira carta: \n %f \n", pib1);
    printf("-Area em KM² da primeira carta: \n %f \n", area1);
    printf("-Codigo da primeira carta: \n %s \n ", codigo1);
    printf("-A densidade populacional da primeira carta é: \n %f \n", densidade_populacional1);
    printf("-O PIB per capita da primaira carta é: \n %f \n \n", pib_per_capita1);
    printf("-A densidade populacional da primeira carta é: \n %f \n", densidade_populacional1);
    printf("-O PIB per capita da primeira carta é: \n %f \n \n", pib_per_capita1);
    printf("-Nome da cidade da segunda carta: \n %s \n", nome2);
    printf("-Estado da segunda carta: \n %s \n", estado2);
    printf("-População da segunda carta: \n %d \n", populacao2);
    printf("-Numero de pontos turisticos da segunda carta: \n %d \n", pontos_turisticos2);
    printf("-PIB da segunda carta: \n %f \n", pib2);
    printf("-Area em KM² da segunda carta: \n %f \n", area2);
    printf("-Codigo da segunda carta: \n %s \n", codigo2);
    printf("-A densidade populacional da segunda carta é: \n %f \n", densidade_populacional2);
    printf("-O PIB per capita da segunda carta é: \n %f \n \n", pib_per_capita2);
  
//funções de comparação↓ (se aparecer 0 significa que a arta 1 venceu, mas se aparecer 0 é por que a carta 2 venceu)
    printf("população: %d\n", populacao1 > populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("PIB: %f\n", pib1 > pib2);
    printf("Área: %f\n", area1 > area2);
    printf("Densidade populacional: %d\n", densidade_populacional1 > densidade_populacional2);
    printf("PIB per capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super poder: %d\n \n", super_poder1 > super_poder2);
//funções de condição↓
    if (populacao1 > populacao2) {
        printf("A população da primeira carta é maior!\n");
      } else {
        printf("A população da segunda carta é maior!\n");
      }

    return 0;

}