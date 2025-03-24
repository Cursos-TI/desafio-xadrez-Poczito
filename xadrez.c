#include <stdio.h>

int main() {

    int maxBispo = 5, maxTorre = 5, maxRainha = 8;
    int movBispo = 0, movTorre = 0, movRainha = 0;

    printf("Movimento do Bispo:\n");
    while (movBispo < maxBispo){
        printf("- Cima Direita\n");
        movBispo++;
    }
    printf("\n");

    printf("Movimento da Torre:\n");
    do {
        printf("- Direita\n");
        movTorre++;
    } while (movTorre < maxTorre);

    printf("\n");

    printf("Movimento da Rainha:\n");
    for (movRainha = 0; movRainha < maxRainha; movRainha++){
        printf("- Esquerda\n");
    }

    int maxCavalo1 = 1, maxCavalo2 = 2;
    int movCavalo1 = 0, movCavalo2 = 0;

    printf("\nMovimento do Cavalo:\n");

    for(movCavalo1 = 0; movCavalo1 < maxCavalo1; movCavalo1++){
        while(movCavalo2 < maxCavalo2){
            printf("- Cima\n");
            movCavalo2++;
        }
        printf("- Direita\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
