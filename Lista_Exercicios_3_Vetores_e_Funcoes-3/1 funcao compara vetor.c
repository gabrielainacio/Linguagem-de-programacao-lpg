#include <stdio.h>
int compara(float a[], float b[], int n);
int compara(float a[], float b[], int n){
    int i; 
    for(i=0; i<n; i++){
        if (a[i] != b[i]){
            return 0;
        }
    }
    return 1; 
}
