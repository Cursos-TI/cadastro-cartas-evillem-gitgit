#include <stdio.h>//biblioteca padrao de entrada e saida


int main() {

    int escolhaPeca;

    printf("\n  A   B  C  D  E  F  G  H");
    printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n4 ♛  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");

    printf("\nPeças diponiveis para movimentar:");
    printf("\n 1 - Torre");
    printf("\n 2 - Bispo");
    printf("\n 3 - Rainha");
    printf("\nEscolha a peça que voce deseja mover:");
    scanf("%d", &escolhaPeca);
    

    switch (escolhaPeca)
    {

    case 1:
        printf("\nTorre");
        printf("\ndireção:");

        for (int contador = 1; contador <= 5; contador = contador + 1)
        {
            printf("\n Direita");
        
        }


            printf("\n  A   B  C  D  E  F  G  H");
            printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n4 ♛  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");

    break;


    case 2:

        printf("\nBispo");
        printf("\ndireção:");

        int contador = 1;

        while (contador <=5)
        {
            contador++;
            printf("\nCima, Direita");
        }

            printf("\n  A   B  C  D  E  F  G  H");
            printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ♝");
            printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n4 ♛  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n7 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");


    break;
    

    case 3:
        int contadorRainha = 1;
   
        printf("\nRainha");
        printf("\ndireção:");

        do
        {
            contadorRainha++;
            printf("\n Esquerda");
        }

        while (contadorRainha < 6);

        
            printf("\n  A   B  C  D  E  F  G  H");
            printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n4 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ♛");
            printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n8 ⬛ ⬜ ⬛ ⬜ ⬛ ♜  ⬛ ⬜");
        break;
    

    default:
        printf("Opção invalida");
    break;
    }



    return 0;
};