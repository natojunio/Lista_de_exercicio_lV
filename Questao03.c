#include <stdio.h>

int main() {
    int numero_de_precos;

    printf("Digite a quantidade de precos que deseja ordenar: ");
    scanf("%d", &numero_de_precos);
    float precos[numero_de_precos];


    printf("Digite os precos:\n");
      for (int i = 0; i < numero_de_precos; i++) {
        scanf("%f", &precos[i]);
    }

    for (int i = 1; i < numero_de_precos; i++) {
        float precoTemp = precos[i];
        int j = i - 1;
        while (j >= 0 && precos[j] > precoTemp) {
            precos[j + 1] = precos[j];
            j--;
        }
        precos[j + 1] = precoTemp;
    }

    printf("Preços ordenados:\n");
      for (int i = 0; i < numero_de_precos; i++) {
        printf("%.2f\n", precos[i]);
    }
    return 0;
}
