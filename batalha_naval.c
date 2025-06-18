#include <stdio.h>

int main() {
    /* Declarando variáveis */
    int tabuleiro[10][10];
    int i,j,g,h,centro, inicio, fim;
    int navio1[3] = {3,3,3} ,navio2[3] = {3,3,3};

    /* Construindo o tabuleiro */
    printf("--Tabuleiro Vazio--");
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            tabuleiro[i][j] = 0;
        }
    }

    /* Mostrando o tabuleiro */
    printf("\n  A B C D E F G H I J");
    for (i=0;i<10;i++){
        printf("\n%d ",i+1);
        for (j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
    }

    /* Colocando os navios em posições */
    printf("\n\n--Posições dos navios--");
    printf("\nNavio 1: ('C1','C2','C3')");
    printf("\nNavio 2: ('H7','I7','J7')");
    printf("\nNavio 1: ('E5','F6','G7')");
    printf("\nNavio 2: ('H3','I2','J1')");

    /* Mostrando o tabuleiro com as posições */
    tabuleiro[0][2] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[6][9] = 3;
    tabuleiro[4][4] = 3;
    tabuleiro[5][5] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    printf("\n\n--Tabuleiro Com Navios--");
    printf("\n  A B C D E F G H I J");
    for (i=0;i<10;i++){
        printf("\n%d ",i+1);
        for (j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
    }

    /* Dando exemplos de como as habilidades funcionam */
    /* Cone */
    g=7; /* Variáveis para selecionar a coordenada do poder */
    h=2;
    for(i=0; i<10; i++) {
        if(i<g){
            for(j=0;j<10;j++){
                tabuleiro[i][j] = tabuleiro[i][j];
            }
        }
        else{
            int centro = h;
            int inicio = centro - (i-g);
            int fim = centro + (i-g);
            if (inicio < 0) inicio = 0;
            if (fim >= 5) fim = 5 - 1;

            for(j = inicio; j <= fim; j++) {
                tabuleiro[i][j] = 5;
            }
        }

    }

    /* Cruz */
    g=2;
    h=2;
    j=0;
    i=0;
    for(i=0;i<10;i++){
        if(i==g){
            for(j=0;j<10;j++){
                if(j>=h-2 && j<=h+2){
                    tabuleiro[i][j] = 7;
                }
            }
        }
        else{
            for(j=0;j<10;j++){
                if(j==h  && i>=g-2 && i<=g+2){
                tabuleiro[i][j] = 7;
                }
                else{
                tabuleiro[i][j] = tabuleiro[i][j];
                }
            }
        }
    }

    /* Octaedro */
    g=7;
    h=7;
    j=0;
    i=0;
    for(i=0;i<10;i++){
        if(i==g){
            for(j=0;j<10;j++){
                if(j>=h-2 && j<=h+2){
                    tabuleiro[i][j] = 9;
                }
            }
        }
        else{
            for(j=0;j<10;j++){
                if(j==h  && i>=g-2 && i<=g+2){
                    tabuleiro[i][j] = 9;
                }
                else if((i==g-1 || i==g+1) && (j==h-1 || j==h+1)){
                    tabuleiro[i][j] = 9;
                }
                else{
                    tabuleiro[i][j] = tabuleiro[i][j];
                }
            }
        }
    }

    /* Tabuleiro final com os poderes representados por:
    5 - Cone;
    7 - Cruz;
    9 - Octaedro
    */
    printf("\n\n--Tabuleiro Final--");
    printf("\n   A B C D E F G H I J");
    for (i=0;i<10;i++){
        if(i==9){
            printf("\n%d ",i+1);
        }
        else{
            printf("\n %d ",i+1); /* Arrumando formatação da tabela para alinhar as colunas */
        }
        for (j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
    }

}
