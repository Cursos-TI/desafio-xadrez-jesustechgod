#include <stdio.h> 

void movertorre(int casas){
    if (casas > 0){
        printf("Direita\n");// mostra a direção do movimento
        movertorre(casas - 1);
    }
}  
void moverbispo(int casas){
    if (casas > 0){
        printf("Cima\n");// mostra a direção do movimento
        printf("Direita\n");// mostra a direção do movimento
        moverbispo(casas - 1);
    }
}   
void moverrainha(int casas){
    if (casas > 0){
        printf("Esquerda \n");// mostra a direção do movimento
        moverrainha (casas - 1);
    }
    
}

int main(){

    int opcao, torre, bispo, rainha, cavalo = 0;
    
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
                printf("quantas casas voce gostaria de mover para a direita(no maximo ate 5): ");
                scanf("%d", &torre);
            
                if (torre <= 5 ){
                    moverrainha (torre);
                }else{
                    printf("\nnumero invalido!!!!!\n");
                }

                break;
        
            case 2:
                printf("\nvoce escolheu o bispo:\n");
                printf("quantas casas voce gostaria de mover para a diagonal superior direita(no maximo ate 5): ");
                scanf("%d", &bispo);
                
                if (bispo <= 5 ){
                    moverbispo (bispo);
                }else{
                    printf("\nnumero invalido!!!!!\n");
                
                }
                break;
            
            case 3:
                printf("\nvoce escolheu a rainha:\n");
                printf("quantas casas voce gostaria de mover para a esquerda(no maximo ate 8): ");
                scanf("%d", &rainha);

                if (rainha <= 8 ){
                    moverrainha (rainha);
                }else{
                    printf("\nnumero invalido!!!!!\n");
                }
                
                break;

            case 4: 
                printf("\nvoce escolheu o cavalo: \n");
            
                for (cavalo ; cavalo < 4; cavalo++) {
                    if (cavalo < 2){
                        printf("Cima\n");// mostra a direção do movimento
                        continue;}   // Pula a iteração quando o cavalo é 2
                    if (cavalo < 3){    
                        printf("Direita");// mostra a direção do movimento
                        break;// Sai do loop quando o cavalo é 3
                    }
                }
                cavalo = 0;
                printf("\n");
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