#include <stdio.h> // biblioteca padrao de entrada e saida

int main() { 


// Dados carta 1


    char Estado1, Cidade1[255], CodigCarta1[4];
    int pontos_turisticos1, populacao1;
    float area1, PIB1, densidPopulacional1, PIBperCapita1, SuperPoder1;


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
    SuperPoder1 = populacao1 + area1 + PIB1 + pontos_turisticos1 + PIBperCapita1 + (1 / densidPopulacional1);
    printf("Super Poder: %.2f\n", SuperPoder1);


// Dados carta 2


    char Estado2, Cidade2[255], CodigCarta2[4];
    int pontos_turisticos2, populacao2;
    float area2, PIB2, densidPopulacional2, PIBperCapita2, SuperPoder2;


    printf("\n\nVamos colocar os atributos da segunda carta!\n\n");

    printf("Digite um caracter do Estado da segunda carta! (A-H): ");
    scanf(" %c", &Estado2);

    while (getchar() != '\n'); // limpar buffer ANTES do fgets da cidade2

    printf("Digite o Codigo da segunda carta! (1 á 4): ");
    scanf("%s", CodigCarta2);

    while (getchar() != '\n'); // limpar buffer na carta 2


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
    SuperPoder2 = populacao2 + area2 + PIB2 + pontos_turisticos2 + PIBperCapita2 + (1 / densidPopulacional2);
    printf("Super Poder: %.2f\n", SuperPoder2);



// comparaçao


    printf("\n===== Comparação de Cartas: =====\n\n");



    if (populacao1 > populacao2){
        printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    }
    else if(populacao1 < populacao2){
        printf("Populacao: Carta 2 venceu (%d)\n", populacao1 > populacao2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };


    if (area1 > area2){
        printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    }
    else if(area1 < area2){
        printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };

    
    if (PIB1 > PIB2){
        printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    }
    else if (PIB1 < PIB2){
        printf("PIB: Carta 2 venceu (%d)\n", PIB1 > PIB2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };

 
    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    }
    else if (pontos_turisticos1 < pontos_turisticos2){
        printf("Pontos Turisticos: Carta 2 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };


    if (densidPopulacional1 < densidPopulacional2){
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidPopulacional1 > densidPopulacional2);
    }
    else if (densidPopulacional1 > densidPopulacional2){
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidPopulacional1 > densidPopulacional2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };
    

    if (PIBperCapita1 > PIBperCapita2){
        printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    }
    else if (PIBperCapita1 < PIBperCapita2){
        printf("PIB per Capita: Carta 2 venceu (%d)\n", PIBperCapita1 > PIBperCapita2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };


    if (SuperPoder1 > SuperPoder2){
        printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
    }
    else if (SuperPoder1 < SuperPoder2){
        printf("Super Poder: Carta 2 venceu (%d)\n", SuperPoder1 > SuperPoder2);
    }
    else{
        printf("\n Empate 🪿🦆\n\n");
    };

    return 0;


}