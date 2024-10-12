#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);


    if (numero > 0) {
        printf("Numeros par entre 1 e %d:\n", numero);
        for (int i = 2; i <= numero; i += 2) {
            printf("%d\n", i);
        
            
        }
    }   else {
        printf("Obedeça a solicitação, digite um numero que seja inteiro e positivo.\n");
    }

    return 0;
}
