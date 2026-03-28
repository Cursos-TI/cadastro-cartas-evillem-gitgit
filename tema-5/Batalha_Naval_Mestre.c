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


void MostrarMatrize35Int(int matriz[3][5]){



    //percorrer linhas
    for(int i = 0; i < 3; i++){
        //percorrer colunas
        for (int b = 0; b < 5; b++)
        {
            printf("%d ", matriz[i][b]);
            
        }
        printf("\n");
    }

}






















int main(){

    int Tabuleiro[10][10] = {0};
    int somaMatriz[10][10];
    int navio1[3] = {3,3,3};

    //Matrizes de Habilidade
    int cone[10][10] = {0};
    int cruz[10][10] = {0};    
    int octaedro[10][10] = {0};

    //meu navio sem input
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas

        Tabuleiro[5+i][7] = navio1[i];        
        
    };



    //cone
    for (int i = 0; i < 10; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 10; j++) {  // Loop interno para as colunas
            if (i == 1 && j == 3) {
                cone[i][j] = 5;
            }
            if (i == 1 && j == 1) {
                cone[i][j] = 5;
            }
            if (i == 2 && j < 5) {
                cone[i][j] = 5;
            }
            if (j == 2 && i < 3) {
                cone[i][j] = 5;
            }
        }
        
    }



    //cruz
    for (int i = 0; i < 10; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 10; j++) {  // Loop interno para as colunas
            if (j == 3 && i == 6) {
                cruz[i][j] = 5;
            }
            if (i == 7 && j > 0 && j < 6) {
                cruz[i][j] = 5;
            }
            if (j == 3 && i == 8) {
                cruz[i][j] = 5;
            }
            
        }
        
    }


    //octaedro
    for (int i = 0; i < 10; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 10; j++) {  // Loop interno para as colunas
            if (i == 2 && j > 5 && j < 9) {
                octaedro[i][j] = 5;
            }
            if (j == 7 && i > 0 && i < 4) {
                octaedro[i][j] = 5;
            }
           
            
        }
        
    }
   

    for(int i = 0; i < 10; i++){
        for(int b = 0; b < 10; b++){

        somaMatriz[i][b] = Tabuleiro[i][b] + cone[i][b] + cruz[i][b] + octaedro[i][b];

        }
    }
    printf("\n");
    MostrarMatrizez10Int(somaMatriz);
    


        

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


    











MATRIZ COM CONDICIONAIS


EXEMPLO 1:


int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
};


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            if(matriz[i][j] > 5)
            {
                matriz[i][j] = -matriz[i][j]; // se o indice for maior
            }
maior que 5 ele fica negativo
        
            printf("%d ", Tabuleiro[j][i]);
        }

        printf("\n");
    }





EXEMPLO 2:


    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int eventCount = 0, addCount = 0;


    for(int i = 0; i < 3; i++){     // linhas
        for(int j = 0; j < 3; j++){ //colunas
            

            printf("%d ", Tabuleiro[j][i]);
        }

        printf("\n");
    }






EXEMPLO 3:


    int matriz[3][3];
 
    // Inicialização da matriz com base em condições simples
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (j % 2 == 0) {
                matriz[i][j] = 1; // Se a COLUNA for par, atribui 1
            } else {
                matriz[i][j] = 0; // Se a COLUNA for ímpar, atribui 0
            }
        }
    }


    // Impressão da matriz
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 


ATENÇÃO‼️
MESMO A MATRIZ SENDO VAZIA VC CONSEGUE USAR OS VALORES
 DAS COLUNAS E LINHAS

aquilo printa:


colunas
    0 1 2   

    1 0 1  ou seja ele transformou em 1 a coluna que for par
    1 0 1  e transformou em 0 as colunas impares
    1 0 1

















EXEMPLO 4:

#include <stdio.h>
 
#define LINHA 3
#define COLUNA 3


int main() {
    int matriz[LINHA][COLUNA];
    int target = 5;// target quer dizer o que eu busco?! numero 5
    int found = 0;
    int soma = 1;
 

    for (int i = 0; i < LINHA; i++) {     
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = soma;
            soma++;  
            printf("%d ", matriz[i][j])
        }
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {      // Loop externo para as linhas
        for (int j = 0; j < COLUNA; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break; //sai do for de fora
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}

    
    */