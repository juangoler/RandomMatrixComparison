#include <stdio.h>

int main() {
    int matriz1[5][5], matriz2[5][5];
    int iguais = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor para matriz1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor para matriz2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
            if (matriz1[i][j] != matriz2[i][j]) {
                iguais = 0;
            }
        }
    }

    if (iguais) {
        printf("\nAs matrizes são iguais.\n");
    } else {
        printf("\nAs matrizes são diferentes.\n");
    }

    return 0;
}
