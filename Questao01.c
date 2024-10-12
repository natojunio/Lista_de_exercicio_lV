#include <stdio.h>

int main() {
    int idade;
    int temp_de_vida;

    printf("Digite sua idade, por gentileza: ");
        scanf("%d", &idade);
    
    if (idade < 18) {
        temp_de_vida = 1;  
        
    } else if (idade >= 18 && idade <= 65) {
        temp_de_vida = 2;  
         
    } else {
        temp_de_vida = 3; 
        
    }

    switch (temp_de_vida) {
       
        case 1:
            printf("Menor de idade\n");
                break;
        
        case 2:
            printf("Maior de idade\n");
                 break;
        
        
        case 3:
            printf("Idoso\n");
                break;
        
    }
    return 0;    
}
