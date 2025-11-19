char **criarTabuleiro() {
    int tamanho = 3;
    char *tab = (char *)malloc(tamanho * sizeof(char *));
    for (int i = 0; i < tamanho; i++) {
        tab[i] = (char *)malloc(tamanho * sizeof(char));
        for (int j = 0; j < tamanho; j++)
            tab[i][j] = '_';
    }
    return tab;
}

void liberarTabuleiro(char **tab) {
    for (int i = 0; i < 3; i++)
        free(tab[i]);
    free(tab);
}