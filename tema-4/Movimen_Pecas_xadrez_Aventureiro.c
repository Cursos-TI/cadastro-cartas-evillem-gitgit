#include <stdio.h>//biblioteca padrao de entrada e saida


int main() {

    int escolhaPeca;

    printf("\n  A   B  C  D  E  F  G  H");
    printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n4 ♛  ⬜ ⬛ ♞  ⬛ ⬜ ⬛ ⬜");
    printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");

    printf("\nPeças diponiveis para movimentar:");
    printf("\n 1 - Torre");
    printf("\n 2 - Bispo");
    printf("\n 3 - Rainha");
    printf("\n 4 - Cavalo");
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
            printf("\n4 ♛  ⬜ ⬛ ♞  ⬛ ⬜ ⬛ ⬜");
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
            printf("\n4 ♛  ⬜ ⬛ ♞  ⬛ ⬜ ⬛ ⬜");
            printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n7 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");


        break;
    
    
    case 3:

        int contadorRainha = 1;
        
        printf("\nRainha");
        printf("\ndireção:");

        do{
            contadorRainha++;
            printf("\n Esquerda");
        }
        while (contadorRainha < 6);
        
            printf("\n  A   B  C  D  E  F  G  H");
            printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n4 ⬛ ⬜ ⬛ ♞  ⬛ ⬜ ⬛ ♛");
            printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
            printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
            printf("\n8 ⬛ ⬜ ⬛ ⬜ ⬛ ♜  ⬛ ⬜");
        
        break;



    case 4:

        printf("\nCavalo");
        printf("\nEscolha a direcao:");
        printf("\n 1 - Baixo/Esquerda");
        printf("\n 2 - Baixo/Direita");
        printf("\n 3 - Cima/Esquerda");
        printf("\n 4 - Cima/Direita");
        printf("\n 5 - Esquerda/Cima");
        printf("\n 6 - Esquerda/Baixo");
        printf("\n 7 - Direita/Cima");
        printf("\n 8 - Direita/Baixo");

    int direcaoCavalo;
    printf("\nDigite:");
    scanf("%d", &direcaoCavalo);

    char *longa;
    char *curta;

    switch (direcaoCavalo) {
        case 1:
        longa = "Baixo";
        curta = "Esquerda";
        break;
        case 2:
        longa = "Baixo";
        curta = "Direita";
        break;
        case 3: longa = "Cima";    curta = "Esquerda"; break;
        case 4: longa = "Cima";    curta = "Direita";  break;
        case 5: longa = "Esquerda";curta = "Cima";     break;
        case 6: longa = "Esquerda";curta = "Baixo";    break;
        case 7: longa = "Direita"; curta = "Cima";     break;
        case 8: longa = "Direita"; curta = "Baixo";    break;
        }

        for (int i = 0; i < 2; i++) {
            printf("\n%s", longa);
        }

        printf("\n%s", curta);
        printf("\no tabuleirinho não vai comparecer, pois eu teria que colocar um tabuleiro diferente em cada posição");
        break;


    
    default:
        printf("Opção invalida");
    break;
    
    }



    return 0;
};