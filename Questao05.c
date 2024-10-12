#include <stdio.h>

int busca_binaria(int lista[], int tamanho, int numero) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) /2;
    if (lista[meio] == numero) {
            return meio;
        }
    if (lista[meio] <numero) {
            inicio = meio + 1;  
    } else {
            fim = meio - 1;  
        }
    }
    return -1;  
}

int main() {
    int quantidade;
    printf("Quantos numeros voce  deseja colocar? ");
       scanf("%d", &quantidade);

    int numeros[quantidade];

    for (int i = 0; i < quantidade; i++) {
        printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < quantidade - 1;i++){
    
    for (int j = 0; j < quantidade - i - 1;j++){
    
    if (numeros[j] > numeros[j + 1]) {
                
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }
    int numero_busca;
    printf("Digite o numero a ser pesquisado: ");
    scanf("%d", &numero_busca);
    
    int resultado = busca_binaria(numeros, quantidade, numero_busca);

    if (resultado != -1) {
        printf("Numero %d encontrado na posicao %d.\n", numero_busca, resultado);
    } else {
        printf("Numero %d nao encontrado.\n", numero_busca);
    }
    return 0;
}
