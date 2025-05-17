#include <stdio.h>
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com zeros (água) 
// Inserindo o primeiro navio na linha 4 ocupando as colunas B, C e D
    int linhaNavio1 = 3; // Índices começam em 0
    int inicioColuna1 = 1; // Índice 1 representa a coluna B

for (int i = 0; i < 3; i++) { tabuleiro[linhaNavio1][inicioColuna1 + i] = 3;} // Insere o navio

// Inserindo o segundo navio na coluna B, ocupando as linhas 7, 8 e 9
    int colunaNavio2 = 1; // Índice 1 representa a coluna B
    // Índices 6, 7 e 8 correspondem às linhas 7, 8 e 9
for (int i = 6; i < 9; i++) {tabuleiro[i][colunaNavio2] = 3;} // Insere o segundo navio
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

     // Exibindo o tabuleiro
    printf("\n*** TABULEIRO BATALHA NAVAL ***\n\n");
    
    // Exibir cabeçalho das colunas
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

        printf("   ");
for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // Imprime cada caractere separadamente
    }
        printf("\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
