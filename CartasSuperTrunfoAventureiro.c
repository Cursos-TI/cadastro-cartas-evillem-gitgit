#include <stdio.h> // biblioteca padrao de entrada e saida

int main() { 


// Dados carta 1


    char Estado1, Cidade1[255], CodigCarta1[4];
    int pontos_turisticos1, populacao1;
    float area1, PIB1, densidPopulacional1, PIBperCapita1;


    printf("Vamos jogar Super Trunfo!\n");
    printf("Primeiro vamos comecar vendo os atributos da primeira carta!\n\n");

    printf("Digite um caracter do Estado da primeira carta! (A-H): ");
    scanf(" %c", &Estado1);

    while (getchar() != '\n'); // limpar buffer ANTES do fgets da cidade

    printf("Digite o Codigo da primeira carta! (1 á 4): ");
    scanf("%s", CodigCarta1);

    while (getchar() != '\n'); // limpar buffer


    printf("Digite o nome da Cidade da primeira carta!: ");
    fgets(Cidade1, sizeof(Cidade1), stdin);


    printf("Digite a quantidade de populacao da primeira carta!: ");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turisticos da primeira carta!: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o tamanho da area da primeira carta!: ");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da primeira carta!: ");
    scanf("%f", &PIB1);


    densidPopulacional1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;



// Dados carta 2


    char Estado2, Cidade2[255], CodigCarta2[4];
    int pontos_turisticos2, populacao2;
    float area2, PIB2, densidPopulacional2, PIBperCapita2;


    printf("\n\nVamos colocar os atributos da segunda carta!\n\n");

    printf("Digite um caracter do Estado da segunda carta! (A-H): ");
    scanf(" %c", &Estado2);

    while (getchar() != '\n'); // limpar buffer ANTES do fgets da cidade

    printf("Digite o Codigo da segunda carta! (1 á 4): ");
    scanf("%s", CodigCarta2);

    while (getchar() != '\n'); // limpar buffer


    printf("Digite o nome da Cidade da segunda carta!: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);


    printf("Digite a quantidade de populacao da segunda carta!: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos da segunda carta!: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o tamanho da area da segunda carta!: ");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da segunda carta!: ");
    scanf("%f", &PIB2);


    densidPopulacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;


    printf("\n===== Carta 1 =====\n\n");

    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c0%s\n",Estado1, CodigCarta1);
    printf("Nome da Cidade: %s", Cidade1); // o fgets já vem \n
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidPopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);



    printf("\n===== Carta 2 =====\n\n");

    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c0%s\n",Estado2, CodigCarta2);
    printf("Nome da Cidade: %s", Cidade2); 
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidPopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);


    return 0;
}