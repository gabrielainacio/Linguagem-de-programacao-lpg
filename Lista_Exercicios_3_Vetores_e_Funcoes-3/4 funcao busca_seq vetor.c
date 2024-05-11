#include <stdio.h>

void busca_seq(int v[], int n, int chave, int indices[]) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        indices[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        if (v[i] == chave) {
            indices[j++] = i;
        }
    }
}


