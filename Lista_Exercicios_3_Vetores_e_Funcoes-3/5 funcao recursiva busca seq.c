/******************************************************************************
Implemente a versão recursiva da função que faz a busca sequencial em um vetor.
Protótipo da função:
int busca_seq_rec(int v[], int n, int chave);
*******************************************************************************/

#include <stdio.h>

int busca_seq_rec(int v[], int n, int chave) {
    int resultado;
    // Caso base
    if (n == 0) {
        return -1;
    }
    // Caso primeira posição do vetor
    if (v[0] == chave) {
        return 0;
    }
  
    resultado = busca_seq_rec(v + 1, n - 1, chave);
    if (resultado != -1) {
        return resultado + 1;
    }
    return -1;
}

