#include <stdio.h>

int main() {

    int opcao, torre  = 0, bispo = 0, rainha = 0, cavalo = 0;
    
    printf("Desafio de Xadrez\n");

    do {
        //menu interativo
        printf("\ndigite qual torre voce gostaria de mover\n");
        printf("1.torre \n");
        printf("2.bispo \n");
        printf("3.rainha \n");
        printf("4.cavalo \n");
        printf("5.finalizar teste. \n");
        printf("digite a opcao que deseja: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1: 
                printf("\nvoce escolheu a torre: \n");
            
                for (torre ; torre < 5 ; torre++) { // move a torre 5 casas a direita
                printf("Direita\n");// mostra a direção do movimento
                }
                torre = 0;
                break;
        
            case 2:
                printf("\nvoce escolheu o bispo:\n");
                do {
                printf("Cima, Direita \n");// mostra a direção do movimento
                bispo++;
                } while (bispo < 5);//move o bispo 5 casas na diagonal
                bispo = 0;
                break;
            
            case 3:
                printf("\nvoce escolheu a opcao o bispo:\n");
                while (rainha < 8){// move a rainha 8 casas a esquerda
                printf("Esquerda \n");// mostra a direção do movimento
                rainha++;
                }
                rainha = 0;
            
                break;

            case 4:// 
                printf("\nvoce escolheu o cavalo: \n");
            
                for (cavalo ; cavalo <= 0 ; cavalo++) { // move o cavalo 1 casa a direita
                    for (int i = 0; i < 2; i++){// move o cavalo 2 casas para cima
                        printf("Cima\n");// mostra a direção do movimento
                    }    
                    printf("Direita\n");// mostra a direção do movimento
                }
                cavalo = 0;
                break;

            case 5:// teste finalizado
                printf("\nteste finalizado\n");
                break;

            default:
            printf("\nopcao invalida!!\n");
            break;
        }

    } while (opcao !=5);
    
    printf("\n");

    return 0;
}