#include <stdio.h>//biblioteca padrao de entrada e saida



void MoverTorre(int QtdCasas){
    if (QtdCasas > 0)
    {
        printf("\n Direita");
        MoverTorre(QtdCasas - 1);
    }

}

void MoverBispo(int QtdCasas){

    int contador = 0;

    for(int i = 0; QtdCasas > i; i++){
        printf("Cima,");


        contador = 0;
        while (contador < 1)
        {
            contador++;
            printf("Direita\n");  
        }

    }

}


void MoverRainha(int QtdCasasRainha){
    int contadorRainha = 0;
    
    printf("\nRainha");
    printf("\ndireção:");

    do{
        contadorRainha++;
        printf("\n Esquerda");
    }
    while (contadorRainha < QtdCasasRainha);
    


}




void MoverCavalo(){

    int contador;

    for(int i = 0; 1 > i; i++){
        printf("Cima,");
        printf("Cima,");


        contador = 0;
        while (contador < 1)
        {
            contador++;
            printf("Direita\n");  
        }

    }

}



int main() {

    int escolhaPeca;

    printf("\nVAMOS VER UM POUCO DE XADREZ!");

    printf("\nesse tabuleiro é so pra olhar mesmo");
    printf("\n  A   B  C  D  E  F  G  H");
    printf("\n1 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n2 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n3 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n4 ♛  ⬜ ⬛ ♞  ⬛ ⬜ ⬛ ⬜");
    printf("\n5 ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n6 ⬛ ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");
    printf("\n7 ⬜ ⬛ ♝  ⬛ ⬜ ⬛ ⬜ ⬛");
    printf("\n8 ♜  ⬜ ⬛ ⬜ ⬛ ⬜ ⬛ ⬜");

    printf("\nPeças diponiveis para simular o movimento:");
    printf("\n 1 - Torre");
    printf("\n 2 - Bispo");
    printf("\n 3 - Rainha");
    printf("\n 4 - Cavalo");
    printf("\nEscolha a peça que voce deseja mover:");
    scanf("%d", &escolhaPeca);
    

    switch (escolhaPeca)
    {

    case 1:
    int QtdCasas;

    printf("\nDigite a quantidade de casa q deseja mover:");
    scanf("%d", &QtdCasas);


    printf("\nTorre");
    printf("\ndireção:");

    MoverTorre(QtdCasas);
       

    break;


    case 2:

        int QtdCasasBispo;

        printf("\nDigite a quantidade de casa q deseja mover:");
        scanf("%d", &QtdCasasBispo);


        printf("\nBispo");
        printf("\ndireção:\n");

        MoverBispo(QtdCasasBispo);

    break;
    
    
    case 3:
        int QtdCasasRainha;
        printf("\nDigite a quantidade de casa q deseja mover:");
        scanf("%d", &QtdCasasRainha);


        printf("\nRainha");
        printf("\ndireção:\n");

        MoverRainha(QtdCasasRainha);
    

    break;



    case 4:

        printf("\nCavalo");
        printf("\ndireção:\n");

        MoverCavalo();
    
    break;


    
    default:
        printf("Opção invalida");
    
    break;
    }



    return 0;
};