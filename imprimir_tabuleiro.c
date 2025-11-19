void imprimeTabuleiro(char **tab) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}