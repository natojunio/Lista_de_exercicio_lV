#include <stdio.h>

void ordenarNotas(float notas[], int totalNotas) {
    for (int i = 0; i < totalNotas - 1; i++) {
        int maior = i;  
        
    for (int j = i + 1; j < totalNotas; j++) {
        
        if (notas[j] > notas[maior]) {
                maior = j;  
            }
        }

        float temp = notas[i];
        notas[i] = notas[maior];
        notas[maior] = temp;
    }
}
int main() {
    int n;
    
    printf("Quantas notas voce deseja ordenar? ");
        scanf("%d", &n);

    float notas[n];
    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
            scanf("%f", &notas[i]);
    }
    ordenarNotas(notas, n);
    printf("Notas em ordem decrescente:\n");
        for (int i = 0; i < n; i++) {
        
        printf("%.2f ", notas[i]);
    }
    printf("\n");
    return 0;
}
