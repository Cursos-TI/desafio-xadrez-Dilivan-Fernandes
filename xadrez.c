#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Bilioteca para abilitar o uso de acentos nos textos.
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main() {

     setlocale(LC_ALL,"Portuguese");//  Abilita o uso de acentos nos textos

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

const int movimentacaoBispo =5;  // Constante com o limite de movimentação do bispo.
printf("\n.........................Movimentação do Bispo..............................\n\n"); // Texto indicatívo.

    printf("Bispo: 5 casas na diagonal superior direita\n\n"); // Texto indicatívo.
        for (int i = 1; i <= movimentacaoBispo ; i++)
        {       
            printf("Cima,Direita \n",i);//  Printa o resultado natela.
        }

printf("\nMovimento finalizado.\n");// Texto indicatívo.


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

printf("\n.........................Movimentação da Torre..............................\n\n");// Texto indicatívo.

printf("Torre: 5 casas para a direita\n\n");// Texto indicatívo.

    const int movimentacaoTorre =5;// Constante com o limite de movimentação da torre.
    int j=1; // Variável int para controlar a contagem de impressão do resoltado.

        while(j <= movimentacaoTorre)// Enquanto o j for menor ou igual a 5, a impressão vai seguir.
        {
            printf("Direita \n",j);//  Printa o resultado natela.
            j ++;// Incrementa mais um valor á variável j.
        }

printf("\nMovimento finalizado.\n");// Texto indicatívo.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
printf("\n.........................Movimentação da Rainha.............................\n\n");// Texto indicatívo.

printf("Rainha: 8 casas para a esquerda\n\n");// Texto indicatívo.
const movimentacaoRainha =8;

    for(int i =1; i <= movimentacaoRainha; i++)
    {
         printf("Esquerda \n",i);//  Printa o resultado natela.
    }

    printf("\nMovimento finalizado.\n");// Texto indicatívo.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}