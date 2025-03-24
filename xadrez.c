#include <stdio.h>

//Movimentação do bispo com loops aninhados
void movimentacaoBispo(int num){
    if(num > 0){
        for (int i = 0; i < num; i++){
            printf("- Cima");
            for (int j = 0; j < 1; j++){
                printf(" Direita\n");
            }
        }
    }
}

//Movimentação da Torre e Rainha com recursividade
void movimentacaoTorre(int num){
    if(num > 0){
        printf("- Direita\n");
        movimentacaoTorre(num - 1);
    }
}

void movimentacaoRainha(int num){
    if(num > 0){
        printf("- Esquerda\n");
        movimentacaoRainha(num - 1);
    }
}

int main() {

    //Declarando o máximo de movimentos de cada peça
    int maxBispo = 5, maxTorre = 5, maxRainha = 8;

    printf("Movimento do Bispo:\n");
    movimentacaoBispo(maxBispo);

    printf("\nMovimento da Torre:\n");
    movimentacaoTorre(maxTorre);

    printf("\nMovimento da Rainha:\n");
    movimentacaoRainha(maxRainha);

    printf("\nMovimento do Cavalo:\n");
    // uso de loop com múltiplas variáveis e condições
    // i = movimento vertical; j = movimento horizontal

    for (int i = 2, j = 1; i > 0 || j > 0; i--, j--){
        (i > 0) ? printf("- Cima\n") : printf("");
        (j > 0) ? printf("- Direita\n") : printf("");
    }

    return 0;
}
