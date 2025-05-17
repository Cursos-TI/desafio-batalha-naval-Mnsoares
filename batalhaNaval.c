#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros (água)

    // Inserindo o primeiro navio na linha 4 ocupando as colunas B, C e D
    int linhaNavio1 = 0; // Índices começam em 0
    int inicioColuna1 = 2; // Índice 1 representa a coluna B

    for (int i = 0; i < 3; i++) { tabuleiro[linhaNavio1][inicioColuna1 + i] = 3;} // Insere o navio

    // Inserindo o segundo navio na coluna B, ocupando as linhas 7, 8 e 9
    int colunaNavio2 = 1; // Índice 1 representa a coluna B

    for (int i = 7; i < 10; i++) { // Índices 6, 7 e 8 correspondem às linhas 7, 8 e 9
        tabuleiro[i][colunaNavio2] = 3; // Insere o segundo navio
    }
   
    // Inserindo navios na diagonal (da posição A1 até D4) (da posição J1 até H3)
    //Navio diagonal1
    for (int i = 0; i < 3; i++) { // O navio terá 3 espaços na diagonal
        tabuleiro[i][i] = 3; 
    }
     //Navio diagonal1
    for (int i = 0; i < 3; i++) { // O navio terá 3 espaços na diagonal
        tabuleiro[i][9 - i] = 3;
    }

    //Saída de habilidade em octaedro: 

    int Octaedro1 = 4;
    int InicioOctaedro1 = 7; //Índice 1 representa a coluna
    int Octaedro2 = 8; //Índice 1 representa a coluna
    int InicioOctaedro2 = 3;
 for (int i = 0; i < 3; i++) { tabuleiro[Octaedro1][InicioOctaedro1 + i] = 3;}
    for (int i = 0; i < 3; i++) {tabuleiro[InicioOctaedro2 + i][Octaedro2] = 3;}// Insere o navio

    // Saída de habilidade em cone:

     // Criando um triângulo de 3 linhas e 5 colunas
    tabuleiro[7][7] = 3;  // Topo do triângulo
    tabuleiro[8][6] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[8][8] = 3;
    tabuleiro[9][5] = 3;
    tabuleiro[9][6] = 3;
    tabuleiro[9][7] = 3;
    tabuleiro[9][8] = 3;
    tabuleiro[9][9] = 3;  // Base do triângulo

    //Saída de Habilidade em cruz:

    int linhaCruz = 5;   // Posição central da cruz
    int colunaCruz = 3;
    int altura = 3;      // Quantidade de linhas na cruz
    int largura = 5;     // Quantidade de colunas na cruz

    // Criando parte vertical
    for (int i = linhaCruz - altura / 2; i <= linhaCruz + altura / 2; i++) {
        if (i >= 0 && i < 10) { // Verifica limites do tabuleiro
            tabuleiro[i][colunaCruz] = 3;
        }
    }

    // Criando parte horizontal
    for (int j = colunaCruz - largura / 2; j <= colunaCruz + largura / 2; j++) {
        if (j >= 0 && j < 10) { // Verifica limites do tabuleiro
            tabuleiro[linhaCruz][j] = 3;
        }
    }

    // Exibindo o tabuleiro
    printf("\n*** TABULEIRO BATALHA NAVAL ***\n\n");
    
    // Exibir cabeçalho das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

        printf("   ");
for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // Imprime cada caractere separadamente
    }
        printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
        
       


        
    
    return 0;
}


   
  
