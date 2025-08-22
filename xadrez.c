#include <stdio.h>

int main(){
    
    //criação de variaveis
    int rainha = 0; 
    int torre = 0;
    int bispo = 0;
    int cavalo = 1;

    //movimentos da rainha
    while (rainha <=4)
    {
        printf("rainha se movendo para direita\n");
        rainha ++;
    }
    //movimentos do bispo
    while (bispo <=4){
        printf("bispo se movendo para cima e direita\n");
        bispo ++;
    }
    //movimentos da rainha 
    for (torre = 0; torre < 8; torre++)
    {
        printf("torre se movendo para esquerda\n");
    }

     while (cavalo--)
    {
        for(int i = 0; i < 2; i++){
            printf("cavalo se movendo para baixo\n"); //imprimindo o movimento para baixo
        }
        printf("cavalo se movendo para esquerda\n"); //imprimindo o movimento para esquerda
    }
    
   
    
     return 0;
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


