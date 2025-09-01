#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];
    int maiorvetor = 0;

    for (int i = 0; i<10; i++) {
        printf("Digite a %da posição do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for(int i = 0; i<10; i++) {
        if(vetor[i] > maiorvetor) {
            maiorvetor = vetor[i];
        }
    }
    printf("O maior valor do vetor é: %d\n", maiorvetor);
    return 0;
}
