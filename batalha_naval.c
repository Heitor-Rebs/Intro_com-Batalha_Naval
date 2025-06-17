#include <stdio.h>

int main() {
    /* Declarando variáveis */
    int tabuleiro[10][10];
    int i,j;
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
}
