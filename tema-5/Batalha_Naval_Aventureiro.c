#include <stdio.h>

void MostrarMatrizez10Int(int matriz[10][10]){

    //numeros horizontais(deitado acima) do tabulerp
    printf("   ");
    for(int i = 0; i < 10; i++){
        printf("%d ", i);
    }
    printf("\n");


    //percorrer linhas
    for(int i = 0; i < 10; i++){

        //numeros verticais(do lado esquerdo) do tabuleiro
        printf("%d  ", i);

        //percorrer colunas
        for (int b = 0; b < 10; b++)
        {
            printf("%d ", matriz[i][b]);
            
        }
        printf("\n");
    }

}





int main(){

   
    int Tabuleiro[10][10] = {0};
    int MatrizTesteDeEspaco[10][10] = {0};
    int somaMatriz[10][10];

    int navio1[3] = {3,3,3};
    int navio2[3] = {5,5,5};

    int linha, coluna, escolhDirecao;

    //meu navio sem input

    for(int i = 0; i <3 ; i++){
        Tabuleiro[5+i][6] = navio2[i];
    
    }
    
    MostrarMatrizez10Int(Tabuleiro);
    


    printf("\nColoque um Navio!🚢");
    printf("\nColunas 0-9");
    printf("\nLinhas 0-9");
    printf("\nDigite a posição do seu Navio (o seu Navio sera representado pelo 3) \n");
    printf("\nLinha:");
    scanf("%d", &linha);
    printf("\nColuna:");
    scanf("%d", &coluna);
    
    printf("\nDigite a direção do barco\n");
    printf("\n 1 - Horizontal\n");
    printf("Horizontal ele vai 2 casas a direita em relação a posição que vc escolheu");
    printf("\n 2 - Vertical\n");
    printf("Vertical ele vai 2 casas para baixo/Direita em relação a posição que vc escolheu\n");
    printf("\n 3 - Diagonal\n");
    printf("Diagonal ele vai 2 casas para baixo em relação a posição que vc escolheu\n");
    scanf("%d", &escolhDirecao);


    while (coluna > 9 || linha > 9)
    {
        printf("\nvoce passou da borda! tente denovo\n");

        printf("Linha: ");
        scanf("%d", &linha);

        printf("Coluna: ");
        scanf("%d", &coluna);
    }

      

    switch (escolhDirecao)
    {

        case 1:
        //horizontal
        for(int i = 0; i <3 ; i++){
            MatrizTesteDeEspaco[linha][coluna+i] = navio1[i];
    
            }  
        break;


        case 2:
        //vertical
        for(int i = 0; i <3 ; i++){
            MatrizTesteDeEspaco[linha+i][coluna] = navio1[i];
            
            } 
        break;


        case 3:
        //Diagonal
        for(int i = 0; i <3 ; i++){
            MatrizTesteDeEspaco[linha+i][coluna+i] = navio1[i];
            
            } 
        break;

        default:{
            printf("posição indisponivel!");
        }
    }


        int bateu = 0;
        //somar a matriz pra ver se bate 
        for(int i = 0; i < 10; i++){
            for(int b = 0; b < 10; b++){

                somaMatriz[i][b] = Tabuleiro[i][b] + MatrizTesteDeEspaco[i][b];

                if(somaMatriz[i][b] == 8){
                    bateu = 1;
                }

            }
        }

        if(bateu){
            printf("\nVish! seu barco bateu em outro\n");
            MostrarMatrizez10Int(somaMatriz);
        }
        else{
            printf("\nBarco bem colocado!\n"); 
            MostrarMatrizez10Int(somaMatriz);
        }

    return 0;
}


/*

❗❗❗VETORES E MATRIZES❗❗❗


*O que são arrays (vetores)?

Vetor 
É unidimensional.

Os valores que estão nos arrays sempre tem que ter o mesmo tipo
(int, float, char ...etc)

EX:

Um array de inteiros com cinco posições
terá índices de 0 a 4.
      qtd de indices


    int numeros[5] = {10, 20, 30, 40, 50};
                       0   1   2   3   4   = 5 posições




❕❕array de Char com mais de um caracter por valor é diferente!!❕❕

EX:Tem q ser assim
char *nomes[] = {"bela", "feia", "maria", "Joao"}



VC PODE USAR ADICIONAR VALORES PARA SUA LISTA de 2 FORMAS:
    int numeros[]; //criei minha lista vou definir os valores

    FORMA CORRETA
    assim:
    numeros[5] = {10, 20, 30, 40, 50};
    numeros[0] = 10;
    

char *nomes[] = {"bela", "feia", "maria", "Joao"};


//minhas ideias❕
// for(int contador = 0; contador < nomes; contador++ ){

//     printf("nome: %s\n", nomes[contador]);
// }


// da aula!🙄
// for(int contador = 0; contador < 4; contador++ ){
//     printf("nome: %s\n", nomes[contador]);

// }

int numeros[5];

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;
    printf("numero: %d", numeros[0]);
    printf("numero: %d", numeros[1]);

//minhas ideias doida
// int Tabuleiro[3][3] = {
//     {51, 72, 63},
//     {11, 22, 33},
//     {15, 26, 37},
//  };
//     printf("%d\n", Tabuleiro[0][0]);
//     for(int i = 1, j = 0; i < 9 && j < 10; i++)
//     { 
//         printf("%d\n", Tabuleiro[j][i]);
//     }









*O que são matrizes?

Matriz
Pode ter duas ou mais dimensões.

EX:

Essa tabela é uma matriz 3x3 e bidimensional vista como linhas e colunas.
Para acessar o elemento na primeira linha e segunda coluna (o número 2),
usaríamos tabela   [0]     [1].
                  linha   coluna

O elemento na terceira linha e terceira coluna (o número 9)
seria acessado com tabela[2][2].

    👉 qtd de linhas  colunas
    int tabela [3]      [3] = {

             coluna

             0  1  2 
    linha 0 {1, 2, 3},
    linha 1 {4, 5, 6},
    linha 2 {7, 8, 9}
};
    
    int tabela[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};



VC PODE USAR ADICIONAR VALORES PARA SUA MATRIZZZ de 2 FORMAS:
    int numeros[]; //criei minha lista vou definir os valores


    A FORMA CORRETA❕
    assim:
    numeros[3][3] = {
    
    {00, 01, 02},
    {10, 11, 12},
    {20, 21, 22},
    
    };
    
        ATENÇÃO ESSA NÃO❗ É A FORMA CORRETA
    ou:
    numeros[0][0] = 00;
    numeros[0][1] = 01;
    numeros[0][2] = 02;
    numeros[1][0] = 10;
    numeros[1][1] = 11;
    printf("numero: %d", numeros[0][1]);


    
    
    */