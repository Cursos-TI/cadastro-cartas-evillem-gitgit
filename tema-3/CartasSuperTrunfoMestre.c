#include <stdio.h> // biblioteca padrao de entrada e saida
#include <stdlib.h> // para o rand
#include <string.h>

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
    Cidade1[strcspn(Cidade1, "\n")] = 0; // remove o \n

    printf("Digite a quantidade de populacao da primeira carta!: ");
    scanf("%d", &populacao1);


    printf("Digite o tamanho da area da primeira carta!: ");
    scanf("%f", &area1);


    printf("Digite o valor do PIB da primeira carta!: ");
    scanf("%f", &PIB1);


    printf("Digite a quantidade de pontos turisticos da primeira carta!: ");
    scanf("%d", &pontos_turisticos1);



    densidPopulacional1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;




// Dados carta 2


    char Estado2, Cidade2[255], CodigCarta2[4];
    int pontos_turisticos2, populacao2;
    float area2, PIB2, densidPopulacional2, PIBperCapita2;


    printf("\n\nVamos colocar os atributos da segunda carta!\n\n");

    printf("Digite um caracter do Estado da segunda carta! (A-H): ");
    scanf(" %c", &Estado2);

    while (getchar() != '\n'); // limpar buffer ANTES do fgets da cidade2

    printf("Digite o Codigo da segunda carta! (1 á 4): ");
    scanf("%s", CodigCarta2);

    while (getchar() != '\n'); // limpar buffer na carta 2


    printf("Digite o nome da Cidade da segunda carta!: ");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = 0; // remove o \n

    printf("Digite a quantidade de populacao da segunda carta!: ");
    scanf("%d", &populacao2);


    printf("Digite o tamanho da area da segunda carta!: ");
    scanf("%f", &area2);


    printf("Digite o valor do PIB da segunda carta!: ");
    scanf("%f", &PIB2);


    printf("Digite a quantidade de pontos turisticos da segunda carta!: ");
    scanf("%d", &pontos_turisticos2);



    densidPopulacional2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;



// Escolha de Atributos carta 1
    int PrimeiroAtributoEscolhido, SegundoAtributoEscolhido;

    printf("\n===== Comparação de Cartas: =====\n\n");
    do{
    printf("\nEscolha 2 atributos diferentes para fazer a Comparação com a Carta 2\n\n");
    printf("Digite\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    
    printf("Digite o primeiro:\n");
    scanf("%d", &PrimeiroAtributoEscolhido);
    printf("Digite o segundo:\n");
    scanf("%d", &SegundoAtributoEscolhido);

    if (PrimeiroAtributoEscolhido == SegundoAtributoEscolhido)
    {
        printf("\nVoce escolheu atributos iguais! Tente novamente.");
    }

    }
    while (PrimeiroAtributoEscolhido == SegundoAtributoEscolhido);
    

    float valor1Atrib_Carta1, valor1Atrib_Carta2;

    float valor2Atrib_Carta1, valor2Atrib_Carta2;

    char nome1Atrib[50], nome2Atrib[50];


    switch (PrimeiroAtributoEscolhido)
        {

            case 1:
                valor1Atrib_Carta1 = populacao1;
                valor1Atrib_Carta2 = populacao2;
                strcpy(nome1Atrib, "Populacao");
            

                printf("\nPrimeiro Atributo Escolhido: População\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %d\n", populacao1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %d\n", populacao2);
            break;



            case 2:
                valor1Atrib_Carta1 = area1;
                valor1Atrib_Carta2 = area2;
                strcpy(nome1Atrib, "Area");

                printf("\nPrimeiro Atributo Escolhido: Area\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", area1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", area2);
            break;


            case 3:
                valor1Atrib_Carta1 = PIB1;
                valor1Atrib_Carta2 = PIB2;
                strcpy(nome1Atrib, "PIB");

                printf("\nPrimeiro Atributo Escolhido: PIB\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", PIB1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", PIB2);
            break;
            

            case 4:
                valor1Atrib_Carta1 = pontos_turisticos1;
                valor1Atrib_Carta2 = pontos_turisticos2;
                strcpy(nome1Atrib, "Pontos Turisticos");

                printf("\nPrimeiro Atributo Escolhido: Pontos Turisticos\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %d\n", pontos_turisticos1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %d\n", pontos_turisticos2);
            break;
            

            case 5:
                valor1Atrib_Carta1 = densidPopulacional1;
                valor1Atrib_Carta2 = densidPopulacional2;
                strcpy(nome1Atrib, "Densidade Populacional");

                printf("\nPrimeiro Atributo Escolhido: Densidade Populacional\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", densidPopulacional1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", densidPopulacional2);
            break;
                     


            default:
                printf("opcao invalida!");
                break;

        }


    switch (SegundoAtributoEscolhido)
        {

            case 1:
            
                valor2Atrib_Carta1 = populacao1;
                valor2Atrib_Carta2 = populacao2;
                strcpy(nome2Atrib, "População");

                printf("\nSegundo Atributo Escolhido: População\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %d\n", populacao1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %d\n", populacao2);
            break;


            case 2:

                valor2Atrib_Carta1 = area1;
                valor2Atrib_Carta2 = area2;
                strcpy(nome2Atrib, "Area");

                printf("\nSegundo Atributo Escolhido: Area\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", area1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", area2);
            break;


            case 3:

                valor2Atrib_Carta1 = PIB1;
                valor2Atrib_Carta2 = PIB2;
                strcpy(nome2Atrib, "PIB");

                printf("\nSegundo Atributo Escolhido: PIB\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", PIB1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", PIB2);
            break;
            

            case 4:

                valor2Atrib_Carta1 = pontos_turisticos1;
                valor2Atrib_Carta2 = pontos_turisticos2;
                strcpy(nome2Atrib, "Pontos Turisticos");

                printf("\nSegundo Atributo Escolhido: Pontos Turisticos\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %d\n", pontos_turisticos1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %d\n", pontos_turisticos2);
            break;
            

            case 5:

                valor2Atrib_Carta1 = densidPopulacional1;
                valor2Atrib_Carta2 = densidPopulacional2;
                strcpy(nome2Atrib, "Densidade Populacional");

                printf("\nSegundo Atributo Escolhido: Densidade Populacional\n");
                printf("Nome da Cidade Carta-1 : %s", Cidade1);
                printf("\nCarta 1 - %.2f\n", densidPopulacional1);
                printf("\nNome da Cidade Carta-2 : %s", Cidade2);
                printf("\nCarta 2 - %.2f\n", densidPopulacional2);
            break;
                    

            default:
                printf("opcao invalida!");
                break;

        }

        float soma1 = valor1Atrib_Carta1 + valor2Atrib_Carta1;
        float soma2 = valor1Atrib_Carta2 + valor2Atrib_Carta2;

        printf("\n===== Resultado Final =====\n");
        printf("Soma de %s e %s:\n", nome1Atrib, nome2Atrib);
        printf("%s: %.2f\n", Cidade1, soma1);
        printf("%s: %.2f\n", Cidade2, soma2);

        printf("Vencedor: %s\n",
            soma1 > soma2 ? Cidade1 :
            soma2 > soma1 ? Cidade2 :
            "Empate!");

    return 0;




}

