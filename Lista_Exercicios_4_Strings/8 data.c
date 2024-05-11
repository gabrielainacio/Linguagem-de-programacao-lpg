/******************************************************************************
 Escreva um programa que leia uma cadeia de caracteres no formato "DD/MM/AAAA" e
copie o dia, mês e ano para 3 variáveis inteiras. Antes disso, o programa deve 
verificar se o formato está correto, ou seja, se as barras estão no lugar certo, 
e se D, M e A são dígitos.
*******************************************************************************/
#include <stdio.h>

int eh_digito(char caractere);
int verifica_formato(char data[]);
int extrai_numero(char data[], int inicio, int fim);

int main() {
    char data[11]; 
    int dia, mes, ano;

    printf("Digite uma data (DD/MM/AAAA): ");
    scanf("%10s", data);

    if (verifica_formato(data)) {
        dia = extrai_numero(data, 0, 2);
        mes = extrai_numero(data, 3, 5);
        ano = extrai_numero(data, 6, 10);
        printf("dia: %d, mes: %d, ano: %d\n", dia, mes, ano);
    } else {
        printf("formato de data invslido\n");
    }

    return 0;
}

int eh_digito(char caractere) {
    return (caractere >= '0' && caractere <= '9');
}

int verifica_formato(char data[]) {
    int barras = 0;
    for (int i = 0; data[i] != '\0'; i++) {
        if ((i == 2 || i == 5) && data[i] != '/') {
            return 0; 
        } else if (i != 2 && i != 5 && !eh_digito(data[i])) {
            return 0; 
        } else if (data[i] == '/') {
            barras++;
        }
    }
    return barras == 2; 
}

int extrai_numero(char data[], int inicio, int fim) {
    int numero = 0;
    for (int i = inicio; i < fim; i++) {
        numero = numero * 10 + (data[i] - '0');
    }
    return numero;
}

