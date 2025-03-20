 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 int main () {

    int escolhajogado, escolhacomputador;
    srand (time(0));

    printf("*** Jogo de Jokenpô *** \n");
    printf("Escolha uma opção! \n");
    printf("1. Pedra \n");
    printf("2. Papel \n");
    printf("3. Tesoura \n");
    printf("Escolha: ");
    scanf("%d", &escolhajogado);

    escolhacomputador = rand() % 3+1;

     switch (escolhajogado)
     {
        case 1:
        printf("Jogador: Pedra - ");
        break;

        case 2:
        printf("Jogador: Papel - ");
        break;

        case 3:
        printf("Jogador: Tesoura - ");
        break;
    
        default:
        printf("Opção inválida! ");
        break;
     }

     switch (escolhacomputador)
     {
        case 1:
        printf("Computador: Pedra \n");
        break;

        case 2:
        printf("Computador: Papel \n");
        break;

        case 3:
        printf("Computador: Tesoura \n");
        break;
     }

     if (escolhacomputador == escolhajogado) {
        printf("### Empate ! ### \n");

     } else if ((escolhajogado == 1) && (escolhacomputador == 3) || 
                (escolhajogado == 2) && (escolhacomputador == 1) || 
                (escolhajogado == 3) && (escolhacomputador == 2)) 
     {
        printf("### Você Ganhou! ### \n");
     } else {
        printf("### Você Perdeu! ### \n");
     }

     return 0;
     }