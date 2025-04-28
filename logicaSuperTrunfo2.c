#include <stdio.h>
int main() {
    int opcao, pontos_turisticos1, pontos_turisticos2;
    unsigned int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade_populacional1;
    float densidade_populacional2;
//opções do menu
    printf("Super trunfo\n");
    printf("1. comparar a população\n");
    printf("2. comparar a área\n");
    printf("3. comparar o PIB\n");
    printf("4. comparar o numero de pontos turísticos\n");
    printf("5. comparar a densidade demográfica\n");
    scanf("%d", &opcao);
//funções de condição(if e else\switch, case e default)
    switch (opcao) {

        case 1:
        printf("Digite a população da primeira carta: \n");
        scanf("%d", &populacao1);
        printf("Digite a população da primeira carta: \n");
        scanf("%d", &populacao1);

        if (populacao1 > populacao2) {
            printf("a população da primeira carta é maior\n");
        } else if(populacao1 < populacao2){
            printf("a população da segunda carta é maior\n");
        } else if(populacao1 == populacao2) {
            printf("é um empate!");
        }
        break;

        case 2: 
        printf("Digite a área em KM² da primeira carta: \n");
        scanf("%f", &area1);
        printf("Digite a área em KM² da segunda carta: \n");
        scanf("%f", &area2);
        if (area1 > area2) {
            printf("A área de primeira carta é maior!\n");
        } else if( area1 < area2) {
            printf("A área da segunda carta é maior!\n");
        } else if ( area1 == area2) {
            printf("É um empate!\n");
        }
        break;

        case 3:
        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &pib1);
        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &pib2);
        if ( pib1 > pib2) {
            printf("O PIB da primeira carta é maior!\n"); 
        } else if(pib1 < pib2) {
            printf("O PIB da segunda carta é maior!\n");
        } else if(pib1 == pib2) {
            printf("É um empate!");
        }
        break;

        case 4:
        printf("Digite o numero de pontos turisticos de primeira carta: \n");
        scanf("%d", &pontos_turisticos1);
        printf("Digite o numero de pontos turisticos de segunda carta: \n");
        scanf("%d", &pontos_turisticos2);
        if(pontos_turisticos1 > pontos_turisticos2) {
            printf("A primeira carta tem mais pontos turísticos!\n");
        } else if(pontos_turisticos1 < pontos_turisticos2) {
            printf("A sengunda carta tem mais pontos turísticos!\n");
        } else if(pontos_turisticos1 == pontos_turisticos2) {
            printf("É um empate!\n");
        }
        break;

        case 5:
        printf("Digite a densidade da primeira carta: \n");
        scanf("%f", &densidade_populacional1);
        printf("Digite a densidade populacional da segunda carta: \n");
        scanf("%f", &densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2) {
            printf("A primeira carta venceu!\n");
        } else if(densidade_populacional1 > densidade_populacional2){
            printf("A segunda carta venceu!\n");
        } else if (densidade_populacional1 == densidade_populacional2){
            printf("É um empate!\n");
        }
        break;

        default:
        printf("Opção indisponivel.\n");

    }
    return 0;
}
