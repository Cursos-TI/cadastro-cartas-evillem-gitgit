#include <stdio.h> // biblioteca padrao de entrada e saida
#include <stdlib.h> // para o rand
#include <string.h>

int main() { 
    

    int atributoEscolhidoAlea;
    atributoEscolhidoAlea = (rand() % 3) + 1;

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



// comparaçao


    printf("\n===== Comparação de Cartas: =====\n\n");


    switch (atributoEscolhidoAlea)
        {
            case 1:
                if (populacao1 > populacao2){
                    printf("\n\nComparação de cartas (Atributo: População):\n");
                    printf("Carta 1 - %s : %d\n", Cidade1, populacao1);
                    printf("Carta 2 - %s : %d\n", Cidade2, populacao2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
                }

                else if(populacao1 < populacao2){
                    printf("\n\nComparação de cartas (Atributo: População):\n");
                    printf("Carta 1 - %s : %d\n", Cidade1, populacao1);
                    printf("Carta 2 - %s : %d\n", Cidade2, populacao2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
                }

                else{
                    printf("\n Empate 🪿🦆\n\n");
                };
                break;

            case 2:
                if (area1 > area2){
                    printf("\n\nComparação de cartas (Atributo: Área):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, area1);
                    printf("Carta 2 - %s : %f\n", Cidade2, area2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);

                }

                else if(area1 < area2){
                    printf("\n\nComparação de cartas (Atributo: Área):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, area1);
                    printf("Carta 2 - %s : %f\n", Cidade2, area2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
                }

                else{
                    printf("\n Empate 🪿🦆\n\n");
                };
                break;
            

            case 3:
                if (PIB1 > PIB2){
                    printf("\n\nComparação de cartas (Atributo: PIB):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, PIB1);
                    printf("Carta 2 - %s : %f\n", Cidade2, PIB2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);

                }

                else if(PIB1 < PIB2){
                    printf("\n\nComparação de cartas (Atributo: PIB):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, PIB1);
                    printf("Carta 2 - %s : %f\n", Cidade2, PIB2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
                }

                else{
                    printf("\n Empate 🪿🦆\n\n");
                };
                break;

            case 4:
                if (densidPopulacional1 > densidPopulacional2){
                    printf("\n\nComparação de cartas (Atributo: Densidade Populacional):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, densidPopulacional1);
                    printf("Carta 2 - %s : %f\n", Cidade2, densidPopulacional2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);

                }

                else if(densidPopulacional1 < densidPopulacional2){
                    printf("\n\nComparação de cartas (Atributo: Densidade Populacional):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, densidPopulacional1);
                    printf("Carta 2 - %s : %f\n", Cidade2, densidPopulacional2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
                }

                else{
                    printf("\n Empate 🪿🦆\n\n");
                };
                break;


            case 5:
                if (PIBperCapita1 > PIBperCapita2){
                    printf("\n\nComparação de cartas (Atributo: PIB per capita):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, PIBperCapita1);
                    printf("Carta 2 - %s : %f\n", Cidade2, PIBperCapita2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);

                }

                else if(PIBperCapita1 < PIBperCapita2){
                    printf("\n\nComparação de cartas (Atributo: PIB per capita):\n");
                    printf("Carta 1 - %s : %f\n", Cidade1, PIBperCapita1);
                    printf("Carta 2 - %s : %f\n", Cidade2, PIBperCapita2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
                }

                else{
                    printf("\n Empate 🪿🦆\n\n");
                };
                break;


        }


    return 0;


}

