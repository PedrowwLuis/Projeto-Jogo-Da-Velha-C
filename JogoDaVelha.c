#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int menu() {
    int op;
    printf("\n===== MENU =====\n");
    printf("1 - Jogar\n");
    printf("2 - Ver Ranking\n");
    printf("3 - Créditos\n");
    printf("4 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &op);
    return op;
}